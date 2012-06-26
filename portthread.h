#ifndef PORTTHREAD_H
#define PORTTHREAD_H

#include <QThread>


//thread class for serial port communication, currently not used
class portThread : public QThread
{
    Q_OBJECT
public:
    explicit portThread(QObject *parent = 0);

signals:

public slots:

};

#endif // PORTTHREAD_H
