#include "intermanegerdelegate.h"
#include "ui_inter_maneger.h"

InterManegerDelegate::InterManegerDelegate(QObject *parent)
    : QObject(parent)
{

}

InterManegerDelegate::InterManegerDelegate(Ui::InterManeger *interManeger, QObject *parent /* = 0 */)
    : QObject(parent)
{
    setupSignal(interManeger);
}

InterManegerDelegate::~InterManegerDelegate()
{

}

void InterManegerDelegate::setupSignal(Ui::InterManeger *interManeger)
{
    ;
}
