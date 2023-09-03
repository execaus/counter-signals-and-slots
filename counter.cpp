#include "counter.h"

Counter::Counter()
    : currentValue(0)
{}

void Counter::incValue()
{
    emit this->valueChanged(++this->currentValue);

    if (this->currentValue == 5) {
        emit this->stop();
    }
}
