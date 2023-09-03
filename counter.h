#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter : public QObject
{
    Q_OBJECT

private:
    int currentValue;

public:
    explicit Counter();

public slots:
    void incValue();

signals:
    void stop();
    void valueChanged(int);

};

#endif // COUNTER_H
