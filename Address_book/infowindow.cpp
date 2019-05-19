#include <QTimer>
#include "mypushbutton.h"
#include "infowindow.h"
#include "ui_infowindow.h"

infowindow::infowindow(QString id,QString action,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::infowindow)
{
    ui->setupUi(this);
    this->setWindowTitle(id+"的通讯录");
        this->setWindowIcon(QIcon(":/icon"));
        this->setFixedSize(600,500);

        mypushbutton * backbtn=new mypushbutton(":/back",1);
        backbtn->setParent(this);
        backbtn->move(500,50);
        connect(backbtn,&QPushButton::clicked,[=](){
            backbtn->zoom1();
            backbtn->zoom2();
            QTimer::singleShot(300,this,[=](){
                this->close();
                emit clientshow();
            });
        });
}

infowindow::~infowindow()
{
    delete ui;
}
