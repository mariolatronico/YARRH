/********************************************************************************
** Form generated from reading UI file 'slicedialog.ui'
**
** Created: Wed 25. Jul 13:11:36 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLICEDIALOG_H
#define UI_SLICEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliceDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *confCombo;
    QLabel *label_8;
    QSpinBox *fillDensity;
    QLabel *label_7;
    QDoubleSpinBox *layerHeight;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBtn;
    QPushButton *removeBtn;
    QListWidget *objectList;
    QGroupBox *objectOptionGroup;
    QFormLayout *formLayout_2;
    QLabel *label_5;
    QDoubleSpinBox *xSpinBox;
    QLabel *label_6;
    QDoubleSpinBox *ySpinBox;
    QLabel *label_3;
    QSpinBox *scaleSpinBox;
    QLabel *label_4;
    QSpinBox *rotationsSpinBox;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_5;
    QPushButton *sliceBtn;
    QPushButton *exportStlBtn;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *stlViewWidget;
    QGridLayout *gridLayout_2;
    QGroupBox *consoleGroup;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *console;
    QLabel *loaderLabel;

    void setupUi(QDialog *SliceDialog)
    {
        if (SliceDialog->objectName().isEmpty())
            SliceDialog->setObjectName(QString::fromUtf8("SliceDialog"));
        SliceDialog->resize(687, 493);
        gridLayout = new QGridLayout(SliceDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_3 = new QWidget(SliceDialog);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMaximumSize(QSize(200, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(groupBox);
        formLayout->setContentsMargins(2, 2, 2, 2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        confCombo = new QComboBox(groupBox);
        confCombo->setObjectName(QString::fromUtf8("confCombo"));

        formLayout->setWidget(0, QFormLayout::FieldRole, confCombo);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        fillDensity = new QSpinBox(groupBox);
        fillDensity->setObjectName(QString::fromUtf8("fillDensity"));

        formLayout->setWidget(2, QFormLayout::FieldRole, fillDensity);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        layerHeight = new QDoubleSpinBox(groupBox);
        layerHeight->setObjectName(QString::fromUtf8("layerHeight"));
        layerHeight->setSingleStep(0.01);

        formLayout->setWidget(1, QFormLayout::FieldRole, layerHeight);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addBtn = new QPushButton(widget_2);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));

        horizontalLayout->addWidget(addBtn);

        removeBtn = new QPushButton(widget_2);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));

        horizontalLayout->addWidget(removeBtn);


        verticalLayout->addWidget(widget_2);

        objectList = new QListWidget(groupBox_2);
        objectList->setObjectName(QString::fromUtf8("objectList"));
        objectList->setTextElideMode(Qt::ElideLeft);
        objectList->setModelColumn(0);

        verticalLayout->addWidget(objectList);

        objectOptionGroup = new QGroupBox(groupBox_2);
        objectOptionGroup->setObjectName(QString::fromUtf8("objectOptionGroup"));
        formLayout_2 = new QFormLayout(objectOptionGroup);
        formLayout_2->setContentsMargins(2, 2, 2, 2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_5 = new QLabel(objectOptionGroup);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        xSpinBox = new QDoubleSpinBox(objectOptionGroup);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));
        xSpinBox->setDecimals(1);
        xSpinBox->setSingleStep(0.1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, xSpinBox);

        label_6 = new QLabel(objectOptionGroup);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        ySpinBox = new QDoubleSpinBox(objectOptionGroup);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));
        ySpinBox->setDecimals(1);
        ySpinBox->setSingleStep(0.1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ySpinBox);

        label_3 = new QLabel(objectOptionGroup);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        scaleSpinBox = new QSpinBox(objectOptionGroup);
        scaleSpinBox->setObjectName(QString::fromUtf8("scaleSpinBox"));
        scaleSpinBox->setMaximum(1000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, scaleSpinBox);

        label_4 = new QLabel(objectOptionGroup);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        rotationsSpinBox = new QSpinBox(objectOptionGroup);
        rotationsSpinBox->setObjectName(QString::fromUtf8("rotationsSpinBox"));
        rotationsSpinBox->setMaximum(360);
        rotationsSpinBox->setSingleStep(5);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, rotationsSpinBox);


        verticalLayout->addWidget(objectOptionGroup);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_5 = new QVBoxLayout(groupBox_5);
        verticalLayout_5->setContentsMargins(2, 2, 2, 2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        sliceBtn = new QPushButton(groupBox_5);
        sliceBtn->setObjectName(QString::fromUtf8("sliceBtn"));

        verticalLayout_5->addWidget(sliceBtn);

        exportStlBtn = new QPushButton(groupBox_5);
        exportStlBtn->setObjectName(QString::fromUtf8("exportStlBtn"));

        verticalLayout_5->addWidget(exportStlBtn);


        verticalLayout->addWidget(groupBox_5);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout->addWidget(widget_3, 1, 0, 2, 1);

        widget_4 = new QWidget(SliceDialog);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_3 = new QGroupBox(widget_4);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setContentsMargins(2, 2, 2, 2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stlViewWidget = new QWidget(groupBox_3);
        stlViewWidget->setObjectName(QString::fromUtf8("stlViewWidget"));
        sizePolicy.setHeightForWidth(stlViewWidget->sizePolicy().hasHeightForWidth());
        stlViewWidget->setSizePolicy(sizePolicy);
        stlViewWidget->setMinimumSize(QSize(0, 0));
        stlViewWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 78, 127);"));
        gridLayout_2 = new QGridLayout(stlViewWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        verticalLayout_4->addWidget(stlViewWidget);


        verticalLayout_3->addWidget(groupBox_3);

        consoleGroup = new QGroupBox(widget_4);
        consoleGroup->setObjectName(QString::fromUtf8("consoleGroup"));
        consoleGroup->setMaximumSize(QSize(16777215, 150));
        gridLayout_3 = new QGridLayout(consoleGroup);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        console = new QPlainTextEdit(consoleGroup);
        console->setObjectName(QString::fromUtf8("console"));

        gridLayout_3->addWidget(console, 0, 1, 1, 1);

        loaderLabel = new QLabel(consoleGroup);
        loaderLabel->setObjectName(QString::fromUtf8("loaderLabel"));
        loaderLabel->setMinimumSize(QSize(32, 32));
        loaderLabel->setMaximumSize(QSize(32, 32));
        loaderLabel->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(loaderLabel, 0, 0, 1, 1);


        verticalLayout_3->addWidget(consoleGroup);


        gridLayout->addWidget(widget_4, 1, 1, 1, 1);


        retranslateUi(SliceDialog);

        QMetaObject::connectSlotsByName(SliceDialog);
    } // setupUi

    void retranslateUi(QDialog *SliceDialog)
    {
        SliceDialog->setWindowTitle(QApplication::translate("SliceDialog", "Slice", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SliceDialog", "Slicer options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SliceDialog", "Config:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("SliceDialog", "Infill:", 0, QApplication::UnicodeUTF8));
        fillDensity->setSuffix(QApplication::translate("SliceDialog", "%", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("SliceDialog", "Layer height:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("SliceDialog", "Object list", 0, QApplication::UnicodeUTF8));
        addBtn->setText(QApplication::translate("SliceDialog", "Add", 0, QApplication::UnicodeUTF8));
        removeBtn->setText(QApplication::translate("SliceDialog", "Remove", 0, QApplication::UnicodeUTF8));
        objectOptionGroup->setTitle(QApplication::translate("SliceDialog", "Object options", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("SliceDialog", "X:", 0, QApplication::UnicodeUTF8));
        xSpinBox->setSuffix(QApplication::translate("SliceDialog", " cm", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("SliceDialog", "Y:", 0, QApplication::UnicodeUTF8));
        ySpinBox->setPrefix(QString());
        ySpinBox->setSuffix(QApplication::translate("SliceDialog", " cm", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("SliceDialog", "Scale:", 0, QApplication::UnicodeUTF8));
        scaleSpinBox->setSuffix(QApplication::translate("SliceDialog", "%", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SliceDialog", "Rotation:", 0, QApplication::UnicodeUTF8));
        rotationsSpinBox->setSuffix(QApplication::translate("SliceDialog", "\302\260", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("SliceDialog", "Export", 0, QApplication::UnicodeUTF8));
        sliceBtn->setText(QApplication::translate("SliceDialog", "GCode", 0, QApplication::UnicodeUTF8));
        exportStlBtn->setText(QApplication::translate("SliceDialog", "STL", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("SliceDialog", "Table preview", 0, QApplication::UnicodeUTF8));
        consoleGroup->setTitle(QApplication::translate("SliceDialog", "Console", 0, QApplication::UnicodeUTF8));
        loaderLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SliceDialog: public Ui_SliceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLICEDIALOG_H
