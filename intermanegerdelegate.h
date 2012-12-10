#ifndef INTERMANEGERDELEGATE_H
#define INTERMANEGERDELEGATE_H

#include <QObject>

namespace Ui
{
    class InterManeger;
}

class InterManegerDelegate : public QObject
{
    Q_OBJECT

public:
    explicit InterManegerDelegate(QObject *parent = 0);
    InterManegerDelegate(Ui::InterManeger *interManeger, QObject *parent = 0)
    ~InterManegerDelegate();

    void setupSignal(Ui::InterManeger *interManeger);
private:
    
};

#endif // INTERMANEGERDELEGATE_H
