/********************************************************************************
** Form generated from reading UI file 'calibratedialog.ui'
**
** Created: Mon 23. Jul 18:00:42 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATEDIALOG_H
#define UI_CALIBRATEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalibrateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QGroupBox *XGroup;
    QHBoxLayout *horizontalLayout;
    QLabel *xCurrentStepsLbl;
    QLabel *xCurrentSteps;
    QPushButton *calibrateXBtn;
    QGroupBox *YGroup;
    QHBoxLayout *horizontalLayout_2;
    QLabel *yCurrentStepsLbl;
    QLabel *yCurrentSteps;
    QPushButton *calibrateYBtn;
    QGroupBox *ZGroup;
    QHBoxLayout *horizontalLayout_3;
    QLabel *zCurrentStepsLbl;
    QLabel *zCurrentSteps;
    QPushButton *calibrateZBtn;
    QGroupBox *EGroup;
    QHBoxLayout *horizontalLayout_4;
    QLabel *eCurrentStepsLbl;
    QLabel *eCurrentSteps;
    QPushButton *calibrateEBtn;

    void setupUi(QDialog *CalibrateDialog)
    {
        if (CalibrateDialog->objectName().isEmpty())
            CalibrateDialog->setObjectName(QString::fromUtf8("CalibrateDialog"));
        CalibrateDialog->resize(444, 259);
        verticalLayout = new QVBoxLayout(CalibrateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_5 = new QGroupBox(CalibrateDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        label = new QLabel(groupBox_5);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox_5);

        XGroup = new QGroupBox(CalibrateDialog);
        XGroup->setObjectName(QString::fromUtf8("XGroup"));
        XGroup->setCheckable(true);
        horizontalLayout = new QHBoxLayout(XGroup);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        xCurrentStepsLbl = new QLabel(XGroup);
        xCurrentStepsLbl->setObjectName(QString::fromUtf8("xCurrentStepsLbl"));
        xCurrentStepsLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(xCurrentStepsLbl);

        xCurrentSteps = new QLabel(XGroup);
        xCurrentSteps->setObjectName(QString::fromUtf8("xCurrentSteps"));

        horizontalLayout->addWidget(xCurrentSteps);

        calibrateXBtn = new QPushButton(XGroup);
        calibrateXBtn->setObjectName(QString::fromUtf8("calibrateXBtn"));

        horizontalLayout->addWidget(calibrateXBtn);


        verticalLayout->addWidget(XGroup);

        YGroup = new QGroupBox(CalibrateDialog);
        YGroup->setObjectName(QString::fromUtf8("YGroup"));
        YGroup->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(YGroup);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        yCurrentStepsLbl = new QLabel(YGroup);
        yCurrentStepsLbl->setObjectName(QString::fromUtf8("yCurrentStepsLbl"));
        yCurrentStepsLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(yCurrentStepsLbl);

        yCurrentSteps = new QLabel(YGroup);
        yCurrentSteps->setObjectName(QString::fromUtf8("yCurrentSteps"));

        horizontalLayout_2->addWidget(yCurrentSteps);

        calibrateYBtn = new QPushButton(YGroup);
        calibrateYBtn->setObjectName(QString::fromUtf8("calibrateYBtn"));

        horizontalLayout_2->addWidget(calibrateYBtn);


        verticalLayout->addWidget(YGroup);

        ZGroup = new QGroupBox(CalibrateDialog);
        ZGroup->setObjectName(QString::fromUtf8("ZGroup"));
        ZGroup->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(ZGroup);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        zCurrentStepsLbl = new QLabel(ZGroup);
        zCurrentStepsLbl->setObjectName(QString::fromUtf8("zCurrentStepsLbl"));
        zCurrentStepsLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(zCurrentStepsLbl);

        zCurrentSteps = new QLabel(ZGroup);
        zCurrentSteps->setObjectName(QString::fromUtf8("zCurrentSteps"));

        horizontalLayout_3->addWidget(zCurrentSteps);

        calibrateZBtn = new QPushButton(ZGroup);
        calibrateZBtn->setObjectName(QString::fromUtf8("calibrateZBtn"));

        horizontalLayout_3->addWidget(calibrateZBtn);


        verticalLayout->addWidget(ZGroup);

        EGroup = new QGroupBox(CalibrateDialog);
        EGroup->setObjectName(QString::fromUtf8("EGroup"));
        EGroup->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(EGroup);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        eCurrentStepsLbl = new QLabel(EGroup);
        eCurrentStepsLbl->setObjectName(QString::fromUtf8("eCurrentStepsLbl"));
        eCurrentStepsLbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(eCurrentStepsLbl);

        eCurrentSteps = new QLabel(EGroup);
        eCurrentSteps->setObjectName(QString::fromUtf8("eCurrentSteps"));

        horizontalLayout_4->addWidget(eCurrentSteps);

        calibrateEBtn = new QPushButton(EGroup);
        calibrateEBtn->setObjectName(QString::fromUtf8("calibrateEBtn"));

        horizontalLayout_4->addWidget(calibrateEBtn);


        verticalLayout->addWidget(EGroup);


        retranslateUi(CalibrateDialog);

        QMetaObject::connectSlotsByName(CalibrateDialog);
    } // setupUi

    void retranslateUi(QDialog *CalibrateDialog)
    {
        CalibrateDialog->setWindowTitle(QApplication::translate("CalibrateDialog", "Calibrate printer", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("CalibrateDialog", "What is this?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CalibrateDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Here you can callibrate your printer axis.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If check box is checked then choosen axis steps per mm will be set on every connection with printer.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        XGroup->setToolTip(QApplication::translate("CalibrateDialog", "Callibrates x axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        XGroup->setTitle(QApplication::translate("CalibrateDialog", "X axis", 0, QApplication::UnicodeUTF8));
        xCurrentStepsLbl->setText(QApplication::translate("CalibrateDialog", "Current steps per mm:", 0, QApplication::UnicodeUTF8));
        xCurrentSteps->setText(QApplication::translate("CalibrateDialog", "40", 0, QApplication::UnicodeUTF8));
        calibrateXBtn->setText(QApplication::translate("CalibrateDialog", "Calibrate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        YGroup->setToolTip(QApplication::translate("CalibrateDialog", "Callibrates y axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        YGroup->setTitle(QApplication::translate("CalibrateDialog", "Y Axis", 0, QApplication::UnicodeUTF8));
        yCurrentStepsLbl->setText(QApplication::translate("CalibrateDialog", "Current steps per mm:", 0, QApplication::UnicodeUTF8));
        yCurrentSteps->setText(QApplication::translate("CalibrateDialog", "40", 0, QApplication::UnicodeUTF8));
        calibrateYBtn->setText(QApplication::translate("CalibrateDialog", "Calibrate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ZGroup->setToolTip(QApplication::translate("CalibrateDialog", "Callibrates z axis", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ZGroup->setTitle(QApplication::translate("CalibrateDialog", "Z Axis", 0, QApplication::UnicodeUTF8));
        zCurrentStepsLbl->setText(QApplication::translate("CalibrateDialog", "Current steps per mm:", 0, QApplication::UnicodeUTF8));
        zCurrentSteps->setText(QApplication::translate("CalibrateDialog", "2560", 0, QApplication::UnicodeUTF8));
        calibrateZBtn->setText(QApplication::translate("CalibrateDialog", "Calibrate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        EGroup->setToolTip(QApplication::translate("CalibrateDialog", "Callibrates extruder", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        EGroup->setTitle(QApplication::translate("CalibrateDialog", "Extruder", 0, QApplication::UnicodeUTF8));
        eCurrentStepsLbl->setText(QApplication::translate("CalibrateDialog", "Current steps per mm:", 0, QApplication::UnicodeUTF8));
        eCurrentSteps->setText(QApplication::translate("CalibrateDialog", "40", 0, QApplication::UnicodeUTF8));
        calibrateEBtn->setText(QApplication::translate("CalibrateDialog", "Calibrate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalibrateDialog: public Ui_CalibrateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATEDIALOG_H
