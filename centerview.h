#ifndef CENTERVIEW_H
#define CENTERVIEW_H

#include <QWidget>

namespace Ui {
class CenterView;
}

class CenterView : public QWidget
{
    Q_OBJECT
    
public:
    explicit CenterView(QWidget *parent = 0);
    ~CenterView();
    
private:
    Ui::CenterView *ui;
};

#endif // CENTERVIEW_H
