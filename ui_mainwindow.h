/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 28. Jun 21:49:11 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionWczytaj;
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QProgressBar *progressBar;
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
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *fileNameLbl;
    QLabel *label_4;
    QLabel *filamentLbl;
    QLabel *label_15;
    QLabel *layersLbl;
    QPushButton *printBtn;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_2;
    QWidget *tempGraphWidget;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QPushButton *homeX;
    QPushButton *homeY;
    QPushButton *homeZ;
    QPushButton *homeAll;
    QWidget *widget_3;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QSpinBox *speedSpinBox;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_13;
    QSpinBox *fanSpinBox;
    QWidget *headControlWidget;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QScrollBar *layerScrollBar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *inConsole;
    QLineEdit *outLine;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuO_Programie;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(988, 683);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionWczytaj = new QAction(MainWindow);
        actionWczytaj->setObjectName(QString::fromUtf8("actionWczytaj"));
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

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMaximumSize(QSize(420, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
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
        formLayout = new QFormLayout(groupBox_4);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        fileNameLbl = new QLabel(groupBox_4);
        fileNameLbl->setObjectName(QString::fromUtf8("fileNameLbl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fileNameLbl);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        filamentLbl = new QLabel(groupBox_4);
        filamentLbl->setObjectName(QString::fromUtf8("filamentLbl"));

        formLayout->setWidget(1, QFormLayout::FieldRole, filamentLbl);

        label_15 = new QLabel(groupBox_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_15);

        layersLbl = new QLabel(groupBox_4);
        layersLbl->setObjectName(QString::fromUtf8("layersLbl"));

        formLayout->setWidget(2, QFormLayout::FieldRole, layersLbl);

        printBtn = new QPushButton(groupBox_4);
        printBtn->setObjectName(QString::fromUtf8("printBtn"));
        printBtn->setCheckable(true);
        printBtn->setChecked(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, printBtn);


        verticalLayout->addWidget(groupBox_4);

        groupBox_7 = new QGroupBox(widget_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy1);
        groupBox_7->setCheckable(true);
        gridLayout_2 = new QGridLayout(groupBox_7);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        tempGraphWidget = new QWidget(groupBox_7);
        tempGraphWidget->setObjectName(QString::fromUtf8("tempGraphWidget"));
        sizePolicy.setHeightForWidth(tempGraphWidget->sizePolicy().hasHeightForWidth());
        tempGraphWidget->setSizePolicy(sizePolicy);
        gridLayout_6 = new QGridLayout(tempGraphWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setSizeConstraint(QLayout::SetMaximumSize);

        gridLayout_2->addWidget(tempGraphWidget, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_7);

        groupBox_5 = new QGroupBox(widget_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy2);
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_4 = new QWidget(groupBox_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
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


        gridLayout_3->addWidget(widget_4, 0, 0, 1, 5);

        widget_3 = new QWidget(groupBox_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        formLayout_2 = new QFormLayout(widget_3);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_7);

        label_10 = new QLabel(widget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_10);

        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(widget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_12);

        speedSpinBox = new QSpinBox(widget_3);
        speedSpinBox->setObjectName(QString::fromUtf8("speedSpinBox"));
        speedSpinBox->setMaximum(20000);
        speedSpinBox->setValue(1500);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, speedSpinBox);

        label_9 = new QLabel(widget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, label_9);

        label_5 = new QLabel(widget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_5);

        label_13 = new QLabel(widget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, label_13);

        fanSpinBox = new QSpinBox(widget_3);
        fanSpinBox->setObjectName(QString::fromUtf8("fanSpinBox"));
        fanSpinBox->setMaximum(100);
        fanSpinBox->setSingleStep(5);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, fanSpinBox);


        gridLayout_3->addWidget(widget_3, 2, 0, 1, 2);

        headControlWidget = new QWidget(groupBox_5);
        headControlWidget->setObjectName(QString::fromUtf8("headControlWidget"));
        headControlWidget->setMinimumSize(QSize(220, 220));
        headControlWidget->setMaximumSize(QSize(200, 200));
        gridLayout_8 = new QGridLayout(headControlWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));

        gridLayout_3->addWidget(headControlWidget, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox_5);


        gridLayout_4->addWidget(widget_2, 0, 0, 2, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(groupBox_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));

        gridLayout_5->addWidget(widget, 0, 1, 1, 1);

        layerScrollBar = new QScrollBar(groupBox_6);
        layerScrollBar->setObjectName(QString::fromUtf8("layerScrollBar"));
        layerScrollBar->setValue(99);
        layerScrollBar->setSliderPosition(99);
        layerScrollBar->setOrientation(Qt::Vertical);
        layerScrollBar->setInvertedAppearance(true);

        gridLayout_5->addWidget(layerScrollBar, 0, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_6, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inConsole = new QPlainTextEdit(groupBox_2);
        inConsole->setObjectName(QString::fromUtf8("inConsole"));

        gridLayout->addWidget(inConsole, 0, 0, 1, 1);

        outLine = new QLineEdit(groupBox_2);
        outLine->setObjectName(QString::fromUtf8("outLine"));
        sizePolicy.setHeightForWidth(outLine->sizePolicy().hasHeightForWidth());
        outLine->setSizePolicy(sizePolicy);

        gridLayout->addWidget(outLine, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 988, 20));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        menuO_Programie = new QMenu(menuBar);
        menuO_Programie->setObjectName(QString::fromUtf8("menuO_Programie"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPlik->menuAction());
        menuBar->addAction(menuO_Programie->menuAction());
        menuPlik->addAction(actionWczytaj);

        retranslateUi(MainWindow);

        baudCombo->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "YARRH v0.0.1", 0, QApplication::UnicodeUTF8));
        actionWczytaj->setText(QApplication::translate("MainWindow", "Wczytaj", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ustawienia portu", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Baud:", 0, QApplication::UnicodeUTF8));
        connectBtn->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Wczytany plik", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Nazwa:", 0, QApplication::UnicodeUTF8));
        fileNameLbl->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Potrzebny filament:", 0, QApplication::UnicodeUTF8));
        filamentLbl->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Ilo\305\233c warstw:", 0, QApplication::UnicodeUTF8));
        layersLbl->setText(QString());
        printBtn->setText(QApplication::translate("MainWindow", "Drukuj", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindow", "Odczyt temperatury", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Sterowanie osiami", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        homeX->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        homeY->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        homeZ->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        homeAll->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "X: 0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Y: 0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "X: 0", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Y: 0", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Pr\304\231dko\305\233\304\207", 0, QApplication::UnicodeUTF8));
        speedSpinBox->setSuffix(QApplication::translate("MainWindow", " mm/min", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Ustaw pozycje", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "Aktualna pozycja", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Wentylator", 0, QApplication::UnicodeUTF8));
        fanSpinBox->setSuffix(QApplication::translate("MainWindow", " %", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Podgl\304\205d", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Konsola", 0, QApplication::UnicodeUTF8));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", 0, QApplication::UnicodeUTF8));
        menuO_Programie->setTitle(QApplication::translate("MainWindow", "O Programie", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
