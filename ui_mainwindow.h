/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 10. Jul 11:27:39 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWczytaj;
    QAction *actionO_Programie;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QProgressBar *progressBar;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QScrollBar *layerScrollBar;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *showTravelChkBox;
    QLabel *label_7;
    QLabel *currentLayer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *inConsole;
    QLineEdit *outLine;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *portCombo;
    QLabel *label_2;
    QComboBox *baudCombo;
    QPushButton *connectBtn;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QLabel *filamentLbl;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *printBtn;
    QPushButton *pauseBtn;
    QGroupBox *temperatureGroupBox;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_8;
    QGridLayout *gridLayout_2;
    QPushButton *t1Btn;
    QLabel *t1Label;
    QLabel *label_14;
    QLabel *label_17;
    QLabel *label_13;
    QComboBox *t1Combo;
    QComboBox *hbCombo;
    QPushButton *hbBtn;
    QSpinBox *fanSpinBox;
    QLabel *t3Label;
    QPushButton *fanBtn;
    QGroupBox *graphGroupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *tempGraphWidget;
    QGridLayout *gridLayout_6;
    QGroupBox *axisControlGroup;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_9;
    QWidget *widget_3;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QLabel *label_19;
    QLabel *xAt;
    QLabel *xMoveTo;
    QLabel *yAt;
    QLabel *yMoveTo;
    QLabel *zAt;
    QLabel *zMoveTo;
    QLabel *label_12;
    QSpinBox *speedSpinBox;
    QLabel *label_6;
    QSpinBox *speedZSpinBox;
    QPushButton *extrudeBtn;
    QSpinBox *extrudeLenghtSpinBox;
    QPushButton *retracktBtn;
    QSpinBox *extrudeSpeedSpinBox;
    QPushButton *disableStpBtn;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QPushButton *homeX;
    QPushButton *homeY;
    QPushButton *homeZ;
    QPushButton *homeAll;
    QWidget *headControlWidget;
    QGridLayout *gridLayout_8;
    QSlider *zSlider;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuO_Programie;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(883, 514);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionWczytaj = new QAction(MainWindow);
        actionWczytaj->setObjectName(QString::fromUtf8("actionWczytaj"));
        actionO_Programie = new QAction(MainWindow);
        actionO_Programie->setObjectName(QString::fromUtf8("actionO_Programie"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMinimumSize(QSize(0, 20));
        progressBar->setMaximumSize(QSize(16777215, 20));
        progressBar->setMaximum(200);
        progressBar->setValue(0);

        gridLayout_4->addWidget(progressBar, 5, 0, 1, 4);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(2, 2, 2, 2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(groupBox_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout_5->addWidget(widget, 1, 1, 1, 1);

        layerScrollBar = new QScrollBar(groupBox_6);
        layerScrollBar->setObjectName(QString::fromUtf8("layerScrollBar"));
        layerScrollBar->setMinimum(1);
        layerScrollBar->setMaximum(1);
        layerScrollBar->setValue(1);
        layerScrollBar->setSliderPosition(1);
        layerScrollBar->setOrientation(Qt::Vertical);
        layerScrollBar->setInvertedAppearance(false);
        layerScrollBar->setInvertedControls(true);

        gridLayout_5->addWidget(layerScrollBar, 1, 3, 1, 1);

        widget_5 = new QWidget(groupBox_6);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        showTravelChkBox = new QCheckBox(widget_5);
        showTravelChkBox->setObjectName(QString::fromUtf8("showTravelChkBox"));

        horizontalLayout_3->addWidget(showTravelChkBox);

        label_7 = new QLabel(widget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_7);

        currentLayer = new QLabel(widget_5);
        currentLayer->setObjectName(QString::fromUtf8("currentLayer"));

        horizontalLayout_3->addWidget(currentLayer);


        gridLayout_5->addWidget(widget_5, 0, 1, 1, 2);


        gridLayout_4->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 150));
        groupBox_2->setCheckable(true);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(2);
        gridLayout->setContentsMargins(-1, 2, -1, 2);
        inConsole = new QPlainTextEdit(groupBox_2);
        inConsole->setObjectName(QString::fromUtf8("inConsole"));

        gridLayout->addWidget(inConsole, 0, 0, 1, 1);

        outLine = new QLineEdit(groupBox_2);
        outLine->setObjectName(QString::fromUtf8("outLine"));
        sizePolicy.setHeightForWidth(outLine->sizePolicy().hasHeightForWidth());
        outLine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(outLine, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        portCombo = new QComboBox(groupBox);
        portCombo->setObjectName(QString::fromUtf8("portCombo"));
        portCombo->setEditable(true);

        horizontalLayout->addWidget(portCombo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        baudCombo = new QComboBox(groupBox);
        baudCombo->setObjectName(QString::fromUtf8("baudCombo"));

        horizontalLayout->addWidget(baudCombo);

        connectBtn = new QPushButton(groupBox);
        connectBtn->setObjectName(QString::fromUtf8("connectBtn"));
        connectBtn->setCheckable(true);

        horizontalLayout->addWidget(connectBtn);


        verticalLayout->addWidget(groupBox);

        groupBox_4 = new QGroupBox(widget_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_6 = new QWidget(groupBox_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 0, -1, 2);
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        filamentLbl = new QLabel(widget_6);
        filamentLbl->setObjectName(QString::fromUtf8("filamentLbl"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(filamentLbl->sizePolicy().hasHeightForWidth());
        filamentLbl->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(filamentLbl, 0, 1, 1, 1);


        verticalLayout_2->addWidget(widget_6);

        widget_7 = new QWidget(groupBox_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, 0);
        printBtn = new QPushButton(widget_7);
        printBtn->setObjectName(QString::fromUtf8("printBtn"));
        printBtn->setCheckable(false);
        printBtn->setChecked(false);

        horizontalLayout_4->addWidget(printBtn);

        pauseBtn = new QPushButton(widget_7);
        pauseBtn->setObjectName(QString::fromUtf8("pauseBtn"));
        pauseBtn->setCheckable(true);

        horizontalLayout_4->addWidget(pauseBtn);


        verticalLayout_2->addWidget(widget_7);


        verticalLayout->addWidget(groupBox_4);

        temperatureGroupBox = new QGroupBox(widget_2);
        temperatureGroupBox->setObjectName(QString::fromUtf8("temperatureGroupBox"));
        sizePolicy1.setHeightForWidth(temperatureGroupBox->sizePolicy().hasHeightForWidth());
        temperatureGroupBox->setSizePolicy(sizePolicy1);
        temperatureGroupBox->setCheckable(false);
        temperatureGroupBox->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(temperatureGroupBox);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_5->setContentsMargins(2, 0, 2, 0);
        widget_8 = new QWidget(temperatureGroupBox);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(widget_8);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        t1Btn = new QPushButton(widget_8);
        t1Btn->setObjectName(QString::fromUtf8("t1Btn"));
        t1Btn->setMaximumSize(QSize(30, 16777215));
        t1Btn->setCheckable(true);

        gridLayout_2->addWidget(t1Btn, 0, 5, 1, 1);

        t1Label = new QLabel(widget_8);
        t1Label->setObjectName(QString::fromUtf8("t1Label"));
        t1Label->setMinimumSize(QSize(50, 0));
        t1Label->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(t1Label, 0, 6, 1, 1);

        label_14 = new QLabel(widget_8);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        label_17 = new QLabel(widget_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 2, 0, 1, 1);

        label_13 = new QLabel(widget_8);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        t1Combo = new QComboBox(widget_8);
        t1Combo->setObjectName(QString::fromUtf8("t1Combo"));
        t1Combo->setMinimumSize(QSize(60, 0));
        t1Combo->setMaximumSize(QSize(60, 16777215));
        t1Combo->setEditable(true);

        gridLayout_2->addWidget(t1Combo, 0, 1, 1, 1);

        hbCombo = new QComboBox(widget_8);
        hbCombo->setObjectName(QString::fromUtf8("hbCombo"));
        hbCombo->setMinimumSize(QSize(60, 0));
        hbCombo->setMaximumSize(QSize(60, 16777215));
        hbCombo->setEditable(true);

        gridLayout_2->addWidget(hbCombo, 2, 1, 1, 1);

        hbBtn = new QPushButton(widget_8);
        hbBtn->setObjectName(QString::fromUtf8("hbBtn"));
        hbBtn->setMaximumSize(QSize(30, 16777215));
        hbBtn->setCheckable(true);

        gridLayout_2->addWidget(hbBtn, 2, 5, 1, 1);

        fanSpinBox = new QSpinBox(widget_8);
        fanSpinBox->setObjectName(QString::fromUtf8("fanSpinBox"));
        fanSpinBox->setMaximum(100);
        fanSpinBox->setSingleStep(5);

        gridLayout_2->addWidget(fanSpinBox, 3, 1, 1, 1);

        t3Label = new QLabel(widget_8);
        t3Label->setObjectName(QString::fromUtf8("t3Label"));
        t3Label->setMinimumSize(QSize(50, 0));
        t3Label->setMaximumSize(QSize(50, 16777215));

        gridLayout_2->addWidget(t3Label, 2, 6, 1, 1);

        fanBtn = new QPushButton(widget_8);
        fanBtn->setObjectName(QString::fromUtf8("fanBtn"));
        fanBtn->setMaximumSize(QSize(30, 16777215));
        fanBtn->setCheckable(true);

        gridLayout_2->addWidget(fanBtn, 3, 5, 1, 1);


        horizontalLayout_5->addWidget(widget_8);

        graphGroupBox = new QGroupBox(temperatureGroupBox);
        graphGroupBox->setObjectName(QString::fromUtf8("graphGroupBox"));
        graphGroupBox->setCheckable(true);
        graphGroupBox->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(graphGroupBox);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 2, 0, 2);
        tempGraphWidget = new QWidget(graphGroupBox);
        tempGraphWidget->setObjectName(QString::fromUtf8("tempGraphWidget"));
        sizePolicy.setHeightForWidth(tempGraphWidget->sizePolicy().hasHeightForWidth());
        tempGraphWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(tempGraphWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMaximumSize);

        verticalLayout_4->addWidget(tempGraphWidget);


        horizontalLayout_5->addWidget(graphGroupBox);


        verticalLayout->addWidget(temperatureGroupBox);

        axisControlGroup = new QGroupBox(widget_2);
        axisControlGroup->setObjectName(QString::fromUtf8("axisControlGroup"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(axisControlGroup->sizePolicy().hasHeightForWidth());
        axisControlGroup->setSizePolicy(sizePolicy4);
        verticalLayout_3 = new QVBoxLayout(axisControlGroup);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_4 = new QWidget(axisControlGroup);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);

        verticalLayout_3->addWidget(widget_4);

        widget_12 = new QWidget(axisControlGroup);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_9 = new QHBoxLayout(widget_12);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        widget_3 = new QWidget(widget_12);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_5);

        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, label_19);

        xAt = new QLabel(widget_3);
        xAt->setObjectName(QString::fromUtf8("xAt"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, xAt);

        xMoveTo = new QLabel(widget_3);
        xMoveTo->setObjectName(QString::fromUtf8("xMoveTo"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, xMoveTo);

        yAt = new QLabel(widget_3);
        yAt->setObjectName(QString::fromUtf8("yAt"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, yAt);

        yMoveTo = new QLabel(widget_3);
        yMoveTo->setObjectName(QString::fromUtf8("yMoveTo"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, yMoveTo);

        zAt = new QLabel(widget_3);
        zAt->setObjectName(QString::fromUtf8("zAt"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, zAt);

        zMoveTo = new QLabel(widget_3);
        zMoveTo->setObjectName(QString::fromUtf8("zMoveTo"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, zMoveTo);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(10, QFormLayout::LabelRole, label_12);

        speedSpinBox = new QSpinBox(widget_3);
        speedSpinBox->setObjectName(QString::fromUtf8("speedSpinBox"));
        speedSpinBox->setMaximum(20000);
        speedSpinBox->setValue(1500);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, speedSpinBox);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(11, QFormLayout::LabelRole, label_6);

        speedZSpinBox = new QSpinBox(widget_3);
        speedZSpinBox->setObjectName(QString::fromUtf8("speedZSpinBox"));
        speedZSpinBox->setMinimum(0);
        speedZSpinBox->setMaximum(1000);

        formLayout_2->setWidget(11, QFormLayout::FieldRole, speedZSpinBox);

        extrudeBtn = new QPushButton(widget_3);
        extrudeBtn->setObjectName(QString::fromUtf8("extrudeBtn"));

        formLayout_2->setWidget(14, QFormLayout::LabelRole, extrudeBtn);

        extrudeLenghtSpinBox = new QSpinBox(widget_3);
        extrudeLenghtSpinBox->setObjectName(QString::fromUtf8("extrudeLenghtSpinBox"));

        formLayout_2->setWidget(14, QFormLayout::FieldRole, extrudeLenghtSpinBox);

        retracktBtn = new QPushButton(widget_3);
        retracktBtn->setObjectName(QString::fromUtf8("retracktBtn"));

        formLayout_2->setWidget(15, QFormLayout::LabelRole, retracktBtn);

        extrudeSpeedSpinBox = new QSpinBox(widget_3);
        extrudeSpeedSpinBox->setObjectName(QString::fromUtf8("extrudeSpeedSpinBox"));

        formLayout_2->setWidget(15, QFormLayout::FieldRole, extrudeSpeedSpinBox);

        disableStpBtn = new QPushButton(widget_3);
        disableStpBtn->setObjectName(QString::fromUtf8("disableStpBtn"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, disableStpBtn);

        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_7 = new QHBoxLayout(widget_10);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget_10);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        homeX = new QPushButton(widget_10);
        homeX->setObjectName(QString::fromUtf8("homeX"));
        homeX->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(homeX);

        homeY = new QPushButton(widget_10);
        homeY->setObjectName(QString::fromUtf8("homeY"));
        homeY->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(homeY);

        homeZ = new QPushButton(widget_10);
        homeZ->setObjectName(QString::fromUtf8("homeZ"));
        homeZ->setMaximumSize(QSize(20, 16777215));

        horizontalLayout_7->addWidget(homeZ);

        homeAll = new QPushButton(widget_10);
        homeAll->setObjectName(QString::fromUtf8("homeAll"));
        homeAll->setMaximumSize(QSize(1600, 16777215));
        homeAll->setLocale(QLocale(QLocale::Polish, QLocale::Poland));

        horizontalLayout_7->addWidget(homeAll);


        formLayout_2->setWidget(3, QFormLayout::SpanningRole, widget_10);


        horizontalLayout_9->addWidget(widget_3);

        headControlWidget = new QWidget(widget_12);
        headControlWidget->setObjectName(QString::fromUtf8("headControlWidget"));
        headControlWidget->setMinimumSize(QSize(220, 220));
        headControlWidget->setMaximumSize(QSize(220, 220));
        gridLayout_8 = new QGridLayout(headControlWidget);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));

        horizontalLayout_9->addWidget(headControlWidget);

        zSlider = new QSlider(widget_12);
        zSlider->setObjectName(QString::fromUtf8("zSlider"));
        zSlider->setMaximum(200);
        zSlider->setTracking(false);
        zSlider->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(zSlider);


        verticalLayout_3->addWidget(widget_12);


        verticalLayout->addWidget(axisControlGroup);


        gridLayout_4->addWidget(widget_2, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 20));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuO_Programie = new QMenu(menuBar);
        menuO_Programie->setObjectName(QString::fromUtf8("menuO_Programie"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuPlik->menuAction());
        menuBar->addAction(menuO_Programie->menuAction());
        menuPlik->addAction(actionWczytaj);
        menuO_Programie->addAction(actionO_Programie);

        retranslateUi(MainWindow);

        baudCombo->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YARRH", 0, QApplication::UnicodeUTF8));
        actionWczytaj->setText(QApplication::translate("MainWindow", "Load", 0, QApplication::UnicodeUTF8));
        actionO_Programie->setText(QApplication::translate("MainWindow", "About YARRH", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Object view", 0, QApplication::UnicodeUTF8));
        showTravelChkBox->setText(QApplication::translate("MainWindow", "Show travel moves", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Current layer:", 0, QApplication::UnicodeUTF8));
        currentLayer->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Console", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Port settings", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Baud:", 0, QApplication::UnicodeUTF8));
        connectBtn->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Needed filament:", 0, QApplication::UnicodeUTF8));
        filamentLbl->setText(QString());
        printBtn->setText(QApplication::translate("MainWindow", "Print", 0, QApplication::UnicodeUTF8));
        pauseBtn->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
        temperatureGroupBox->setTitle(QApplication::translate("MainWindow", "Temperature", 0, QApplication::UnicodeUTF8));
        t1Btn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        t1Label->setText(QApplication::translate("MainWindow", " 0 \302\260C", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "T1", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "HB", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Fan", 0, QApplication::UnicodeUTF8));
        hbBtn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        fanSpinBox->setSuffix(QApplication::translate("MainWindow", " %", 0, QApplication::UnicodeUTF8));
        t3Label->setText(QApplication::translate("MainWindow", " 0 \302\260C", 0, QApplication::UnicodeUTF8));
        fanBtn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        graphGroupBox->setTitle(QApplication::translate("MainWindow", "Monitor", 0, QApplication::UnicodeUTF8));
        axisControlGroup->setTitle(QApplication::translate("MainWindow", "Axis control", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Position", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Go to:", 0, QApplication::UnicodeUTF8));
        xAt->setText(QApplication::translate("MainWindow", "X: 0", 0, QApplication::UnicodeUTF8));
        xMoveTo->setText(QApplication::translate("MainWindow", "X: 0", 0, QApplication::UnicodeUTF8));
        yAt->setText(QApplication::translate("MainWindow", "Y: 0", 0, QApplication::UnicodeUTF8));
        yMoveTo->setText(QApplication::translate("MainWindow", "Y: 0", 0, QApplication::UnicodeUTF8));
        zAt->setText(QApplication::translate("MainWindow", "Z: 0", 0, QApplication::UnicodeUTF8));
        zMoveTo->setText(QApplication::translate("MainWindow", "Z: 0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "XY speed", 0, QApplication::UnicodeUTF8));
        speedSpinBox->setSuffix(QApplication::translate("MainWindow", " mm/min", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Z Speed", 0, QApplication::UnicodeUTF8));
        speedZSpinBox->setSuffix(QApplication::translate("MainWindow", " mm/min", 0, QApplication::UnicodeUTF8));
        extrudeBtn->setText(QApplication::translate("MainWindow", "Extrude", 0, QApplication::UnicodeUTF8));
        extrudeLenghtSpinBox->setSuffix(QApplication::translate("MainWindow", " mm", 0, QApplication::UnicodeUTF8));
        retracktBtn->setText(QApplication::translate("MainWindow", "Retract", 0, QApplication::UnicodeUTF8));
        extrudeSpeedSpinBox->setSuffix(QApplication::translate("MainWindow", " mm/s", 0, QApplication::UnicodeUTF8));
        disableStpBtn->setText(QApplication::translate("MainWindow", "Disable motors", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        homeX->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        homeY->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        homeZ->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        homeAll->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
        menuPlik->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuO_Programie->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
