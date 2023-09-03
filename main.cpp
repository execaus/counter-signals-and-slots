#include "counter.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QtWidgets>

int main(int argumentsCount, char *consoleArguments[])
{
    QApplication app(argumentsCount, consoleArguments);

    QLabel labelElement("0");
    QPushButton buttonElement("Увеличить");
    Counter counter;

    labelElement.show();
    buttonElement.show();

    QObject::connect(&buttonElement, SIGNAL(clicked()), &counter, SLOT(incValue()));
    QObject::connect(&counter, SIGNAL(valueChanged(int)), &labelElement, SLOT(setNum(int)));
    QObject::connect(&counter, SIGNAL(stop()), &app, SLOT(quit()));

    return app.exec();
}
