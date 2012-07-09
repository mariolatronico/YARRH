#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QWidget>
#include <QUrl>
#include <QDebug>
#include <QDesktopServices>

namespace Ui {
    class AboutWindow;
}

class AboutWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AboutWindow(QWidget *parent = 0);
    ~AboutWindow();
    void setVersion(int major, int minor, int revision);
private:
    Ui::AboutWindow *ui;
private slots:
    void openUrl();
    void on_label_6_linkActivated(const QString &link);

    void on_label_3_linkActivated(const QString &link);

public slots:
    void showOnXY(QPoint);
};

#endif // ABOUTWINDOW_H
