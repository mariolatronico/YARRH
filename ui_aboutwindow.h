/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created: Sun 8. Jul 12:21:23 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QFrame *line;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *donateBtn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QString::fromUtf8("AboutWindow"));
        AboutWindow->resize(320, 240);
        verticalLayout_2 = new QVBoxLayout(AboutWindow);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(AboutWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));
        label->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Arial\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        line = new QFrame(AboutWindow);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        widget_2 = new QWidget(AboutWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 87 12pt \"Arial Black\";"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setCursor(QCursor(Qt::ArrowCursor));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(AboutWindow);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 26));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        donateBtn = new QPushButton(widget_3);
        donateBtn->setObjectName(QString::fromUtf8("donateBtn"));
        donateBtn->setMaximumSize(QSize(92, 26));
        donateBtn->setCursor(QCursor(Qt::PointingHandCursor));
        donateBtn->setStyleSheet(QString::fromUtf8("border: 0;\n"
"image:  url(:/imgs/donate.gif);"));

        horizontalLayout_2->addWidget(donateBtn);


        verticalLayout_2->addWidget(widget_3);

        widget = new QWidget(AboutWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(widget);


        retranslateUi(AboutWindow);

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QWidget *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "About YARRH", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutWindow", "YARRH: Yet Another RepRap Host", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AboutWindow", "v 0.1.0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AboutWindow", "Arkadiusz \305\232piewak", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AboutWindow", "arek@okinet.pl", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/wuflnor/YARRH/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://github.com/wuflnor/YARRH/</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AboutWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://3d-printers.pl\"><span style=\" text-decoration: underline; color:#0000ff;\">http://3d-printers.pl</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        donateBtn->setText(QString());
        pushButton->setText(QApplication::translate("AboutWindow", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
