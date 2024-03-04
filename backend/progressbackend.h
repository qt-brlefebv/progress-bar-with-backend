#ifndef PROGRESSBACKEND_H
#define PROGRESSBACKEND_H

#include <QObject>
#include <QQmlEngine>

class ProgressBackend : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    ProgressBackend();

    int getProgressValue();
};

#endif // PROGRESSBACKEND_H
