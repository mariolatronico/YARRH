/********************************************************************************
** Form generated from reading UI file 'optiondialog.ui'
**
** Created: Mon 23. Jul 18:00:42 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *sizeX;
    QLabel *label_2;
    QSpinBox *sizeY;
    QLabel *label_3;
    QSpinBox *sizeZ;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *slicerDir;
    QLabel *label_5;
    QLineEdit *configDir;
    QLabel *label_6;
    QLineEdit *outputDir;
    QPushButton *outputDirBtn;
    QPushButton *configDirBtn;
    QPushButton *slicerDirBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *OptionDialog)
    {
        if (OptionDialog->objectName().isEmpty())
            OptionDialog->setObjectName(QString::fromUtf8("OptionDialog"));
        OptionDialog->resize(409, 272);
        verticalLayout = new QVBoxLayout(OptionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(OptionDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        sizeX = new QSpinBox(groupBox);
        sizeX->setObjectName(QString::fromUtf8("sizeX"));
        sizeX->setValue(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, sizeX);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        sizeY = new QSpinBox(groupBox);
        sizeY->setObjectName(QString::fromUtf8("sizeY"));
        sizeY->setValue(20);

        formLayout->setWidget(1, QFormLayout::FieldRole, sizeY);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        sizeZ = new QSpinBox(groupBox);
        sizeZ->setObjectName(QString::fromUtf8("sizeZ"));
        sizeZ->setValue(15);

        formLayout->setWidget(2, QFormLayout::FieldRole, sizeZ);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(OptionDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        slicerDir = new QLineEdit(groupBox_2);
        slicerDir->setObjectName(QString::fromUtf8("slicerDir"));

        gridLayout->addWidget(slicerDir, 0, 1, 1, 2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        configDir = new QLineEdit(groupBox_2);
        configDir->setObjectName(QString::fromUtf8("configDir"));

        gridLayout->addWidget(configDir, 1, 1, 1, 2);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        outputDir = new QLineEdit(groupBox_2);
        outputDir->setObjectName(QString::fromUtf8("outputDir"));

        gridLayout->addWidget(outputDir, 2, 1, 1, 2);

        outputDirBtn = new QPushButton(groupBox_2);
        outputDirBtn->setObjectName(QString::fromUtf8("outputDirBtn"));

        gridLayout->addWidget(outputDirBtn, 2, 3, 1, 1);

        configDirBtn = new QPushButton(groupBox_2);
        configDirBtn->setObjectName(QString::fromUtf8("configDirBtn"));

        gridLayout->addWidget(configDirBtn, 1, 3, 1, 1);

        slicerDirBtn = new QPushButton(groupBox_2);
        slicerDirBtn->setObjectName(QString::fromUtf8("slicerDirBtn"));

        gridLayout->addWidget(slicerDirBtn, 0, 3, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        widget = new QWidget(OptionDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closeBtn = new QPushButton(widget);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        horizontalLayout->addWidget(closeBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget);


        retranslateUi(OptionDialog);

        QMetaObject::connectSlotsByName(OptionDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionDialog)
    {
        OptionDialog->setWindowTitle(QApplication::translate("OptionDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("OptionDialog", "Printer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OptionDialog", "X size", 0, QApplication::UnicodeUTF8));
        sizeX->setSuffix(QApplication::translate("OptionDialog", " cm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OptionDialog", "Y size", 0, QApplication::UnicodeUTF8));
        sizeY->setSuffix(QApplication::translate("OptionDialog", " cm", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("OptionDialog", "Z size", 0, QApplication::UnicodeUTF8));
        sizeZ->setSuffix(QApplication::translate("OptionDialog", " cm", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("OptionDialog", "Slic3r", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("OptionDialog", "Path to slic3r", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OptionDialog", "Configs dir", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("OptionDialog", "Output", 0, QApplication::UnicodeUTF8));
        outputDirBtn->setText(QApplication::translate("OptionDialog", "Dir", 0, QApplication::UnicodeUTF8));
        configDirBtn->setText(QApplication::translate("OptionDialog", "Dir", 0, QApplication::UnicodeUTF8));
        slicerDirBtn->setText(QApplication::translate("OptionDialog", "Dir", 0, QApplication::UnicodeUTF8));
        closeBtn->setText(QApplication::translate("OptionDialog", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionDialog: public Ui_OptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
