/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 8. Jul 16:32:48 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *fileNameLbl;
    QLabel *label_4;
    QLabel *filamentLbl;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *printBtn;
    QPushButton *pauseBtn;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_8;
    QGridLayout *gridLayout_2;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_14;
    QComboBox *t1Combo;
    QPushButton *t1Btn;
    QLabel *t1Label;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QComboBox *hbCombo;
    QPushButton *hbBtn;
    QLabel *t3Label;
    QCheckBox *monitTempChck;
    QWidget *tempGraphWidget;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QPushButton *homeX;
    QPushButton *homeY;
    QPushButton *homeZ;
    QPushButton *homeAll;
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
    QLabel *label_13;
    QSpinBox *fanSpinBox;
    QPushButton *disableStpBtn;
    QSlider *zSlider;
    QWidget *headControlWidget;
    QGridLayout *gridLayout_8;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuO_Programie;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(838, 542);
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

        horizontalLayout->addWidget(label);

        portCombo = new QComboBox(groupBox);
        portCombo->setObjectName(QString::fromUtf8("portCombo"));
        portCombo->setEditable(true);

        horizontalLayout->addWidget(portCombo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        baudCombo = new QComboBox(groupBox);
        baudCombo->setObjectName(QString::fromUtf8("baudCombo"));

        horizontalLayout->addWidget(baudCombo);

        connectBtn = new QPushButton(groupBox);
        connectBtn->setObjectName(QString::fromUtf8("connectBtn"));

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
        formLayout = new QFormLayout(widget_6);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(-1, 0, -1, 2);
        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        fileNameLbl = new QLabel(widget_6);
        fileNameLbl->setObjectName(QString::fromUtf8("fileNameLbl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fileNameLbl);

        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        filamentLbl = new QLabel(widget_6);
        filamentLbl->setObjectName(QString::fromUtf8("filamentLbl"));

        formLayout->setWidget(1, QFormLayout::FieldRole, filamentLbl);


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

        groupBox_7 = new QGroupBox(widget_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setCheckable(false);
        groupBox_7->setChecked(false);
        horizontalLayout_5 = new QHBoxLayout(groupBox_7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMaximumSize);
        widget_8 = new QWidget(groupBox_7);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        gridLayout_2 = new QGridLayout(widget_8);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(9, 0, 0, -1);
        widget_9 = new QWidget(widget_8);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_6 = new QHBoxLayout(widget_9);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 2);
        label_14 = new QLabel(widget_9);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_6->addWidget(label_14);

        t1Combo = new QComboBox(widget_9);
        t1Combo->setObjectName(QString::fromUtf8("t1Combo"));
        t1Combo->setMinimumSize(QSize(60, 0));
        t1Combo->setMaximumSize(QSize(60, 16777215));
        t1Combo->setEditable(true);

        horizontalLayout_6->addWidget(t1Combo);

        t1Btn = new QPushButton(widget_9);
        t1Btn->setObjectName(QString::fromUtf8("t1Btn"));
        t1Btn->setMaximumSize(QSize(30, 16777215));
        t1Btn->setCheckable(true);

        horizontalLayout_6->addWidget(t1Btn);

        t1Label = new QLabel(widget_9);
        t1Label->setObjectName(QString::fromUtf8("t1Label"));
        t1Label->setMinimumSize(QSize(50, 0));
        t1Label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_6->addWidget(t1Label);


        gridLayout_2->addWidget(widget_9, 0, 0, 1, 1);

        widget_11 = new QWidget(widget_8);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        horizontalLayout_8 = new QHBoxLayout(widget_11);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 2);
        label_17 = new QLabel(widget_11);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_8->addWidget(label_17);

        hbCombo = new QComboBox(widget_11);
        hbCombo->setObjectName(QString::fromUtf8("hbCombo"));
        hbCombo->setMinimumSize(QSize(60, 0));
        hbCombo->setMaximumSize(QSize(60, 16777215));
        hbCombo->setEditable(true);

        horizontalLayout_8->addWidget(hbCombo);

        hbBtn = new QPushButton(widget_11);
        hbBtn->setObjectName(QString::fromUtf8("hbBtn"));
        hbBtn->setMaximumSize(QSize(30, 16777215));
        hbBtn->setCheckable(true);

        horizontalLayout_8->addWidget(hbBtn);

        t3Label = new QLabel(widget_11);
        t3Label->setObjectName(QString::fromUtf8("t3Label"));
        t3Label->setMinimumSize(QSize(50, 0));
        t3Label->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_8->addWidget(t3Label);


        gridLayout_2->addWidget(widget_11, 1, 0, 1, 1);

        monitTempChck = new QCheckBox(widget_8);
        monitTempChck->setObjectName(QString::fromUtf8("monitTempChck"));

        gridLayout_2->addWidget(monitTempChck, 4, 0, 1, 1);


        horizontalLayout_5->addWidget(widget_8);

        tempGraphWidget = new QWidget(groupBox_7);
        tempGraphWidget->setObjectName(QString::fromUtf8("tempGraphWidget"));
        sizePolicy.setHeightForWidth(tempGraphWidget->sizePolicy().hasHeightForWidth());
        tempGraphWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(tempGraphWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMaximumSize);

        horizontalLayout_5->addWidget(tempGraphWidget);


        verticalLayout->addWidget(groupBox_7);

        groupBox_5 = new QGroupBox(widget_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(groupBox_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_4 = new QWidget(groupBox_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        homeX = new QPushButton(widget_4);
        homeX->setObjectName(QString::fromUtf8("homeX"));
        homeX->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(homeX);

        homeY = new QPushButton(widget_4);
        homeY->setObjectName(QString::fromUtf8("homeY"));
        homeY->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(homeY);

        homeZ = new QPushButton(widget_4);
        homeZ->setObjectName(QString::fromUtf8("homeZ"));
        homeZ->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(homeZ);

        homeAll = new QPushButton(widget_4);
        homeAll->setObjectName(QString::fromUtf8("homeAll"));
        homeAll->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_2->addWidget(homeAll);


        verticalLayout_3->addWidget(widget_4);

        widget_12 = new QWidget(groupBox_5);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        horizontalLayout_9 = new QHBoxLayout(widget_12);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        widget_3 = new QWidget(widget_12);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        label_19 = new QLabel(widget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, label_19);

        xAt = new QLabel(widget_3);
        xAt->setObjectName(QString::fromUtf8("xAt"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, xAt);

        xMoveTo = new QLabel(widget_3);
        xMoveTo->setObjectName(QString::fromUtf8("xMoveTo"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, xMoveTo);

        yAt = new QLabel(widget_3);
        yAt->setObjectName(QString::fromUtf8("yAt"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, yAt);

        yMoveTo = new QLabel(widget_3);
        yMoveTo->setObjectName(QString::fromUtf8("yMoveTo"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, yMoveTo);

        zAt = new QLabel(widget_3);
        zAt->setObjectName(QString::fromUtf8("zAt"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, zAt);

        zMoveTo = new QLabel(widget_3);
        zMoveTo->setObjectName(QString::fromUtf8("zMoveTo"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, zMoveTo);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_12);

        speedSpinBox = new QSpinBox(widget_3);
        speedSpinBox->setObjectName(QString::fromUtf8("speedSpinBox"));
        speedSpinBox->setMaximum(20000);
        speedSpinBox->setValue(1500);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, speedSpinBox);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_6);

        speedZSpinBox = new QSpinBox(widget_3);
        speedZSpinBox->setObjectName(QString::fromUtf8("speedZSpinBox"));
        speedZSpinBox->setMinimum(0);
        speedZSpinBox->setMaximum(1000);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, speedZSpinBox);

        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_13);

        fanSpinBox = new QSpinBox(widget_3);
        fanSpinBox->setObjectName(QString::fromUtf8("fanSpinBox"));
        fanSpinBox->setMaximum(100);
        fanSpinBox->setSingleStep(5);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, fanSpinBox);

        disableStpBtn = new QPushButton(widget_3);
        disableStpBtn->setObjectName(QString::fromUtf8("disableStpBtn"));

        formLayout_2->setWidget(9, QFormLayout::SpanningRole, disableStpBtn);


        horizontalLayout_9->addWidget(widget_3);

        zSlider = new QSlider(widget_12);
        zSlider->setObjectName(QString::fromUtf8("zSlider"));
        zSlider->setMaximum(200);
        zSlider->setTracking(false);
        zSlider->setOrientation(Qt::Vertical);

        horizontalLayout_9->addWidget(zSlider);

        headControlWidget = new QWidget(widget_12);
        headControlWidget->setObjectName(QString::fromUtf8("headControlWidget"));
        headControlWidget->setMinimumSize(QSize(220, 220));
        headControlWidget->setMaximumSize(QSize(220, 220));
        gridLayout_8 = new QGridLayout(headControlWidget);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));

        horizontalLayout_9->addWidget(headControlWidget);


        verticalLayout_3->addWidget(widget_12);


        verticalLayout->addWidget(groupBox_5);


        gridLayout_4->addWidget(widget_2, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 838, 20));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YARRH v0.1.0", 0, QApplication::UnicodeUTF8));
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
        label_3->setText(QApplication::translate("MainWindow", "Name:", 0, QApplication::UnicodeUTF8));
        fileNameLbl->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Needed filament:", 0, QApplication::UnicodeUTF8));
        filamentLbl->setText(QString());
        printBtn->setText(QApplication::translate("MainWindow", "Print", 0, QApplication::UnicodeUTF8));
        pauseBtn->setText(QApplication::translate("MainWindow", "Pause", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Temperature", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "T1", 0, QApplication::UnicodeUTF8));
        t1Btn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        t1Label->setText(QApplication::translate("MainWindow", " 0 \302\260C", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "HB", 0, QApplication::UnicodeUTF8));
        hbBtn->setText(QApplication::translate("MainWindow", "On", 0, QApplication::UnicodeUTF8));
        t3Label->setText(QApplication::translate("MainWindow", " 0 \302\260C", 0, QApplication::UnicodeUTF8));
        monitTempChck->setText(QApplication::translate("MainWindow", "Monitor", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Axis control", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        homeX->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        homeY->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        homeZ->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        homeAll->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
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
        label_13->setText(QApplication::translate("MainWindow", "Fan", 0, QApplication::UnicodeUTF8));
        fanSpinBox->setSuffix(QApplication::translate("MainWindow", " %", 0, QApplication::UnicodeUTF8));
        disableStpBtn->setText(QApplication::translate("MainWindow", "Disable motors", 0, QApplication::UnicodeUTF8));
        menuPlik->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuO_Programie->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
