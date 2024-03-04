#ifndef PROGRESSBACKEND_H
#define PROGRESSBACKEND_H

#include <QObject>
#include <QQmlEngine>

class ProgressBackend : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int progress READ progress NOTIFY progressChanged)
    QML_ELEMENT
    QML_SINGLETON
public:
    ProgressBackend();

    int progress();

signals:
    void progressChanged();
};

#endif // PROGRESSBACKEND_H
