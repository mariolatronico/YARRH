/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 26. Jun 12:58:53 2012
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
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPlainTextEdit *inConsole;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *outConsole;
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
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *fileNameLbl;
    QLabel *label_4;
    QLabel *filamentLbl;
    QPushButton *printBtn;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *homeX;
    QPushButton *homeY;
    QPushButton *homeZ;
    QLabel *label_9;
    QPushButton *homeAll;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QMenu *menuO_Programie;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(763, 611);
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

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 200));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        inConsole = new QPlainTextEdit(groupBox_2);
        inConsole->setObjectName(QString::fromUtf8("inConsole"));

        gridLayout->addWidget(inConsole, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 6, 0, 1, 3);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(16777215, 200));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        outConsole = new QPlainTextEdit(groupBox_3);
        outConsole->setObjectName(QString::fromUtf8("outConsole"));

        gridLayout_2->addWidget(outConsole, 0, 0, 1, 1);

        outLine = new QLineEdit(groupBox_3);
        outLine->setObjectName(QString::fromUtf8("outLine"));

        gridLayout_2->addWidget(outLine, 1, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 6, 3, 1, 1);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
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

        printBtn = new QPushButton(groupBox_4);
        printBtn->setObjectName(QString::fromUtf8("printBtn"));
        printBtn->setCheckable(true);
        printBtn->setChecked(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, printBtn);


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(widget_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        homeX = new QPushButton(groupBox_5);
        homeX->setObjectName(QString::fromUtf8("homeX"));

        gridLayout_3->addWidget(homeX, 1, 1, 1, 1);

        homeY = new QPushButton(groupBox_5);
        homeY->setObjectName(QString::fromUtf8("homeY"));

        gridLayout_3->addWidget(homeY, 1, 2, 1, 1);

        homeZ = new QPushButton(groupBox_5);
        homeZ->setObjectName(QString::fromUtf8("homeZ"));

        gridLayout_3->addWidget(homeZ, 1, 3, 1, 1);

        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 0, 4, 1, 1);

        homeAll = new QPushButton(groupBox_5);
        homeAll->setObjectName(QString::fromUtf8("homeAll"));

        gridLayout_3->addWidget(homeAll, 1, 4, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 3, 0, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 4, 0, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 5, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 6, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_5);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_3->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_6 = new QPushButton(groupBox_5);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_3->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_7 = new QPushButton(groupBox_5);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_3->addWidget(pushButton_7, 2, 3, 1, 1);

        pushButton_8 = new QPushButton(groupBox_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout_3->addWidget(pushButton_8, 2, 4, 1, 1);

        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_3->addWidget(pushButton_9, 3, 1, 1, 1);

        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_3->addWidget(pushButton_10, 3, 2, 1, 1);

        pushButton_11 = new QPushButton(groupBox_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_3->addWidget(pushButton_11, 3, 3, 1, 1);

        pushButton_12 = new QPushButton(groupBox_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_3->addWidget(pushButton_12, 3, 4, 1, 1);

        pushButton_13 = new QPushButton(groupBox_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_3->addWidget(pushButton_13, 4, 1, 1, 1);

        pushButton_14 = new QPushButton(groupBox_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_3->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_15 = new QPushButton(groupBox_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_3->addWidget(pushButton_15, 4, 3, 1, 1);

        pushButton_16 = new QPushButton(groupBox_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));

        gridLayout_3->addWidget(pushButton_16, 4, 4, 1, 1);

        pushButton_17 = new QPushButton(groupBox_5);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));

        gridLayout_3->addWidget(pushButton_17, 5, 1, 1, 1);

        pushButton_18 = new QPushButton(groupBox_5);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));

        gridLayout_3->addWidget(pushButton_18, 5, 2, 1, 1);

        pushButton_19 = new QPushButton(groupBox_5);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));

        gridLayout_3->addWidget(pushButton_19, 5, 3, 1, 1);

        pushButton_20 = new QPushButton(groupBox_5);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));

        gridLayout_3->addWidget(pushButton_20, 5, 4, 1, 1);

        pushButton_21 = new QPushButton(groupBox_5);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));

        gridLayout_3->addWidget(pushButton_21, 6, 1, 1, 1);

        pushButton_22 = new QPushButton(groupBox_5);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));

        gridLayout_3->addWidget(pushButton_22, 6, 2, 1, 1);

        pushButton_23 = new QPushButton(groupBox_5);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));

        gridLayout_3->addWidget(pushButton_23, 6, 3, 1, 1);

        pushButton_24 = new QPushButton(groupBox_5);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));

        gridLayout_3->addWidget(pushButton_24, 6, 4, 1, 1);


        verticalLayout->addWidget(groupBox_5);


        gridLayout_4->addWidget(widget_2, 0, 0, 1, 1);

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

        gridLayout_5->addWidget(widget, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_6, 0, 2, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 763, 20));
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
        groupBox_2->setTitle(QApplication::translate("MainWindow", "In", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Out", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ustawienia portu", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Baud:", 0, QApplication::UnicodeUTF8));
        connectBtn->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Wczytany plik", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Nazwa:", 0, QApplication::UnicodeUTF8));
        fileNameLbl->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Potrzebny filament:", 0, QApplication::UnicodeUTF8));
        filamentLbl->setText(QString());
        printBtn->setText(QApplication::translate("MainWindow", "Drukuj", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Sterowanie drukark\304\205", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Y", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        homeX->setText(QString());
        homeY->setText(QString());
        homeZ->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
        homeAll->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "+100mm", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "+10mm", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "+1mm", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "+0.1mm", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "-0.1mm", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QString());
        pushButton_16->setText(QString());
        pushButton_17->setText(QString());
        pushButton_18->setText(QString());
        pushButton_19->setText(QString());
        pushButton_20->setText(QString());
        pushButton_21->setText(QString());
        pushButton_22->setText(QString());
        pushButton_23->setText(QString());
        pushButton_24->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Podgl\304\205d", 0, QApplication::UnicodeUTF8));
        menuPlik->setTitle(QApplication::translate("MainWindow", "Plik", 0, QApplication::UnicodeUTF8));
        menuO_Programie->setTitle(QApplication::translate("MainWindow", "O Programie", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
