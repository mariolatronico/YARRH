#include <QtGui>
#include <QtOpenGL>
#include <GL/glu.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <math.h>
#include "glwidget.h"


#ifndef GL_MULTISAMPLE
#define GL_MULTISAMPLE  0x809D
#endif

//constructor
GlWidget::GlWidget(QWidget *parent)
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{
    xRot = 0;
    yRot = 0;
    zRot = 0;
    zoom = -0.625;
    xMove = 0;
    yMove = 0;
    layers = 5000;
    show_travel=false;
    qtGreen = QColor::fromCmykF(0.40, 0.0, 1.0, 0.0);
    qtPurple = QColor::fromCmykF(0.39, 0.39, 0.0, 0.0);
}


//destructor
GlWidget::~GlWidget()
 {
 }

void GlWidget::qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}


//setting rotations of scene
void GlWidget::setXRotation(int angle)
 {
     qNormalizeAngle(angle);
     if (angle != xRot) {
         xRot = angle;
         emit xRotationChanged(angle);
         updateGL();
     }
 }

 void GlWidget::setYRotation(int angle)
 {
     qNormalizeAngle(angle);
     if (angle != yRot) {
         yRot = angle;
         emit yRotationChanged(angle);
         updateGL();
     }
 }

 void GlWidget::setZRotation(int angle)
 {
     qNormalizeAngle(angle);
     if (angle != zRot) {
         zRot = angle;
         emit zRotationChanged(angle);
         updateGL();
     }
 }

//size hints
 QSize GlWidget::minimumSizeHint() const
  {
      return QSize(50, 50);
  }

  QSize GlWidget::sizeHint() const
  {
      return QSize(800, 800);
  }

  //inizalization of gl

  void GlWidget::initializeGL()
   {
       qglClearColor(qtPurple.dark());
       glEnable(GL_DEPTH_TEST);
       glEnable(GL_CULL_FACE);
       //glShadeModel(GL_SMOOTH);
       glEnable(GL_LIGHTING);
       glEnable(GL_LIGHT0);
       glEnable(GL_MULTISAMPLE);
       glEnable(GL_COLOR_MATERIAL);
       static GLfloat lightPosition[4] = { 0.5, 5.0, 7.0, 1.0 };
       glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);
   }
  //resize event
  void GlWidget::resizeGL(int width, int height)
   {
       int side = qMin(width, height);
       glViewport((width - side) / 2, (height - side) / 2, side, side);

       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
   #ifdef QT_OPENGL_ES_1
       glOrthof(-0.5 + zoom , +0.5 - zoom, -0.5 + zoom, +0.5 - zoom, 4.0, 100.0);
   #else
       glOrtho(-0.5 + zoom , +0.5 - zoom, -0.5 + zoom, +0.5 - zoom, 4.0, 100.0);
   #endif
       glMatrixMode(GL_MODELVIEW);
   }

  void GlWidget::paintGL()
   {
       glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
       glLoadIdentity();
       glTranslatef(0.0+xMove, 0.0+yMove, -20.0);
       glRotatef(xRot / 16.0, 1.0, 0.0, 0.0);
       glRotatef(yRot / 16.0, 0.0, 1.0, 0.0);
       glRotatef(zRot / 16.0, 0.0, 0.0, 1.0);
       glTranslatef(-1.0+xMove, -1.0+yMove, 0.0);
       for(int i=0; i<this->objects.size(); i++){
           this->objects.at(i)->draw(0.01,this->layers, show_travel);
       }
       drawAxis();
       drawGrid();
   }
//mouse press event
  void GlWidget::mousePressEvent(QMouseEvent *event)
   {
       lastPos = event->pos();
   }

  //mouse move event
  void GlWidget::mouseMoveEvent(QMouseEvent *event)
   {
       int dx = event->x() - lastPos.x();
       int dy = event->y() - lastPos.y();

       if (event->buttons() & Qt::RightButton) {
           setXRotation(xRot + 8 * dy);
           setYRotation(yRot + 8 * dx);
       } else if (event->buttons() & Qt::LeftButton) {
           setXRotation(xRot + 8 * dy);
           setZRotation(zRot + 8 * dx);
       } else if (event->buttons() & Qt::MiddleButton){
           xMove += (float)dx/1000;
           yMove -= (float)dy/1000;
           updateGL();
       }

       lastPos = event->pos();
   }
//wheel event
  void GlWidget::wheelEvent(QWheelEvent * event){
      zoom += (float)event->delta()/960;
      qDebug() << zoom;

      glMatrixMode(GL_PROJECTION);
      glLoadIdentity();
  #ifdef QT_OPENGL_ES_1
      glOrthof(-0.5 + zoom , +0.5 - zoom, -0.5 + zoom, +0.5 - zoom, 4.0, 100.0);
  #else
      glOrtho(-0.5 + zoom , +0.5 - zoom, -0.5 + zoom, +0.5 - zoom, 4.0, 100.0);
  #endif
      glMatrixMode(GL_MODELVIEW);

      updateGL();
  }


  //drawing 20x20cm grind in 3dview
  void GlWidget::drawGrid(){
      GLdouble gridWidth=2.0;
      GLint     iSlices=32;
      GLint     iStacks=32;
      GLdouble  lineRadius=0.001;
      bool      bSolid=true;
      bool      bBlend=true;
      GLfloat fCurrentColor[4];
      // Get the current color
      glGetFloatv(GL_CURRENT_COLOR, fCurrentColor);

      // Save the current transformation matrix..
      glPushMatrix();

      // Create a quadratic object used to draw our axis
      // cylinders and cones
      GLUquadricObj* pQuadric = gluNewQuadric();
      if(!pQuadric)
          return;

      // Set the quadric state
      gluQuadricNormals(pQuadric, GLU_SMOOTH);
      gluQuadricTexture(pQuadric, GL_FALSE);

      if(bSolid)
      {
          glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
          gluQuadricDrawStyle(pQuadric, GLU_FILL);
      }
      else
      {
          glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
          gluQuadricDrawStyle(pQuadric, GLU_LINE);
      }

      // Enable alpha blending?
      if(bBlend)
      {
          glEnable(GL_BLEND);
          glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
      }

      //draw grid
      //rotate for x
      glRotated(90, 0.0, 1.0, 0.0);
      for(int i=0; i<20; i++){
                gluCylinder(pQuadric, lineRadius, lineRadius, gridWidth, iSlices, iStacks);
                glTranslated(0.0f, 0.1f, 0.0f);
      }
                gluCylinder(pQuadric, lineRadius, lineRadius, gridWidth, iSlices, iStacks);
      glRotated(90, 1.0, 0.0, 0.0);
      for(int i=0; i<21; i++){
                gluCylinder(pQuadric, lineRadius, lineRadius, gridWidth, iSlices, iStacks);
                glTranslated(0.0f, 0.1f, 0.0f);
      }

      // Delete the quadric
      gluDeleteQuadric(pQuadric);

      // Restore the current transformation matrix..
      glPopMatrix();

      // Restore the current color
      glColor4fv(fCurrentColor);

      // Disable blend function
      glDisable(GL_BLEND);
  }

  //draw axis
  void GlWidget::drawAxis()

  {
      GLdouble dAxisLength=1.0;
      GLdouble  dAxisRadius=0.05;
      GLdouble  dArrowLength=0.1;
      GLdouble  dArrowRadius=0.1;
      float     fScale=0.1;
      GLint     iSlices=32;
      GLint     iStacks=32;
      GLfloat   fColorX[4]={1.0,0.0,0.0,1.0};
      GLfloat   fColorY[4]={0.0,1.0,0.0,1.0};
      GLfloat   fColorZ[4]={0.0,0.0,1.0,1.0};
      bool      bSolid=true;
      bool      bBlend=true;
      GLdouble dArrowPosn = dAxisLength;// - (dArrowLength/2);
      GLfloat fCurrentColor[4];

      // Get the current color
      glGetFloatv(GL_CURRENT_COLOR, fCurrentColor);

      // Save the current transformation matrix..
      glPushMatrix();

      // Create a quadratic object used to draw our axis
      // cylinders and cones
      GLUquadricObj* pQuadric = gluNewQuadric();
      if(!pQuadric)
          return;

      // Set the quadric state
      gluQuadricNormals(pQuadric, GLU_SMOOTH);
      gluQuadricTexture(pQuadric, GL_FALSE);

      if(bSolid)
      {
          glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
          gluQuadricDrawStyle(pQuadric, GLU_FILL);
      }
      else
      {
          glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
          gluQuadricDrawStyle(pQuadric, GLU_LINE);
      }

      // Enable alpha blending?
      if(bBlend)
      {
          glEnable(GL_BLEND);
          glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
      }

      // Display a Sphere at the axis origin
      glColor4f(0.5f, 0.5f, 0.5f, 1.0f);
      gluSphere(pQuadric, dAxisRadius*fScale*2.5f, iSlices, iStacks);

      // Display the Z-Axis and arrow
      // Set the color
      glColor4fv(fColorZ);

      gluCylinder(pQuadric, dAxisRadius*fScale, dAxisRadius*fScale, dAxisLength*fScale, iSlices, iStacks);
      glTranslated(0.0f, 0.0f, dArrowPosn*fScale);    // Move to arrow position
      gluCylinder(pQuadric, dArrowRadius*fScale, 0.0f, dArrowLength*fScale, iSlices, iStacks);
      gluQuadricOrientation(pQuadric, GLU_INSIDE);
      gluDisk(pQuadric, 0.0f, dArrowRadius*fScale, iSlices, 1);
      gluQuadricOrientation(pQuadric, GLU_OUTSIDE);
      glTranslated(0.0f, 0.0f, -dArrowPosn*fScale);   // Move to 0, 0, 0


      // Display the X-Axis and arrow
      // Set the color
      glColor4fv(fColorX);

      glRotated(90, 0.0, 1.0, 0.0);                   // Rotate for X
      gluCylinder(pQuadric, dAxisRadius*fScale, dAxisRadius*fScale, dAxisLength*fScale, iSlices, iStacks);
      glTranslated(0.0f, 0.0f, dArrowPosn*fScale);    // Move to arrow position
      gluCylinder(pQuadric, dArrowRadius*fScale, 0.0f, dArrowLength*fScale, iSlices, iStacks);
      gluQuadricOrientation(pQuadric, GLU_INSIDE);
      gluDisk(pQuadric, 0.0f, dArrowRadius*fScale, iSlices, 1);
      gluQuadricOrientation(pQuadric, GLU_OUTSIDE);
      glTranslated(0.0f, 0.0f, -dArrowPosn*fScale);   // Move to 0, 0, 0


      // Display the Y-Axis and arrow
      // Set the color
      glColor4fv(fColorY);

      glRotated(-90, 1.0, 0.0, 0.0);                  // Rotate for Y
      gluCylinder(pQuadric, dAxisRadius*fScale, dAxisRadius*fScale, dAxisLength*fScale, iSlices, iStacks);
      glTranslated(0.0f, 0.0f, dArrowPosn*fScale);    // Move to arrow position
      gluCylinder(pQuadric, dArrowRadius*fScale, 0.0f, dArrowLength*fScale, iSlices, iStacks);
      gluQuadricOrientation(pQuadric, GLU_INSIDE);
      gluDisk(pQuadric, 0.0f, dArrowRadius*fScale, iSlices, 1);
      gluQuadricOrientation(pQuadric, GLU_OUTSIDE);
      glTranslated(0.0f, 0.0f, -dArrowPosn*fScale);   // Move to 0, 0, 0


      // Delete the quadric
      gluDeleteQuadric(pQuadric);

      // Restore the current transformation matrix..
      glPopMatrix();

      // Restore the current color
      glColor4fv(fCurrentColor);

      // Disable blend function
      glDisable(GL_BLEND);
  }


  void GlWidget::addObject(GCodeObject *object){
      this->objects.append(object);
  }

  void GlWidget::setLayers(int layers){
      this->layers=layers;
      updateGL();
  }

  void GlWidget::showTravel(bool show){
      this->show_travel=show;
      updateGL();
  }
