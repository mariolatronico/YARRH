#ifndef PORTTHREAD_H
#define PORTTHREAD_H

#include <QThread>

class portThread : public QThread
{
    Q_OBJECT
public:
    explicit portThread(QObject *parent = 0);

signals:

public slots:

};

#endif // PORTTHREAD_H
