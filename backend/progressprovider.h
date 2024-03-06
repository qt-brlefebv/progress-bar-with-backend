#ifndef PROGRESSPROVIDER_H
#define PROGRESSPROVIDER_H

#include <QObject>
#include <QQmlEngine>

class ProgressProvider : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int progress READ progress NOTIFY progressChanged)
    QML_ELEMENT
    QML_SINGLETON
public:
    ProgressProvider();

    int progress();

signals:
    void progressChanged();
};

#endif // PROGRESSPROVIDER_H
