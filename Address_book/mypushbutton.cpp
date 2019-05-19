#include "mypushbutton.h"
#include <QPropertyAnimation>
#include <QPixmap>
#include <QBitmap>

mypushbutton::mypushbutton(QString path,double size)
{
    QPixmap pixmap(path);
    pixmap=pixmap.scaled(pixmap.width()/size,pixmap.height()/size);

    this->resize(pixmap.size());
    this->setMask(QBitmap(pixmap.mask()));
    //addbtn->setIcon(pixmap);
    this->setStyleSheet("QPushButton{border-image: url("+path+");}");
  //  addbtn->setMask(pixmap.createHeuristicMask());
}

void mypushbutton::zoom1()
{
    QPropertyAnimation * animation1 = new QPropertyAnimation(this,"geometry");
    animation1->setDuration(200);
    animation1->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation1->setEndValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    animation1->setEasingCurve(QEasingCurve::OutBounce);
    animation1->start();
}

void mypushbutton::zoom2()
{
    QPropertyAnimation * animation1 = new QPropertyAnimation(this,"geometry");
    animation1->setDuration(200);
    animation1->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
    animation1->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    animation1->setEasingCurve(QEasingCurve::OutBounce);
    animation1->start();
}

