#include <QPushButton>
#include <QPixmap>
#include <QBitmap>
#include <QTimer>
#include <QMessageBox>
#include "clientwindow.h"
#include "mypushbutton.h"
#include "info_window.h"

clientwindow::clientwindow(QString id,QWidget *parent) : QMainWindow(parent)
{
    this->id=id;
    this->setWindowTitle("用户："+id);
    this->setWindowIcon(QIcon(":/icon"));
    this->setFixedSize(600,500);

    mypushbutton * outbtn=new mypushbutton(":/logout",6);
    outbtn->setParent(this);
    outbtn->move(540,15);
    connect(outbtn,&QPushButton::clicked,[=](){
        QMessageBox::StandardButton rb = QMessageBox::question(this, "注销", "你确定要注销当前账户吗?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if(rb == QMessageBox::Yes)
        {
            emit mainshow();
            this->close();
        }
    });

    mypushbutton * addbtn=new mypushbutton(":/add",1.5);
    addbtn->setParent(this);
    addbtn->move(100,55);
    connect(addbtn,&QPushButton::clicked,[=](){
        addbtn->zoom1();
        addbtn->zoom2();
        info_window * info = new info_window(this->id,"add");
        connect(info,&info_window::clientshow,[=](){
            this->show();
        });
        QTimer::singleShot(300,this,[=](){
            this->hide();
            info->setGeometry(this->geometry());
            info->show();
        });
    });

    mypushbutton * removebtn=new mypushbutton(":/remove",1.5);
    removebtn->setParent(this);
    removebtn->move(330,55);
    connect(removebtn,&QPushButton::clicked,[=](){
        removebtn->zoom1();
        removebtn->zoom2();
        info_window * info = new info_window(this->id,"remove");
        connect(info,&info_window::clientshow,[=](){
            this->show();
        });
        QTimer::singleShot(300,this,[=](){
            this->hide();
            info->setGeometry(this->geometry());
            info->show();
        });
    });

    mypushbutton * searchbtn=new mypushbutton(":/search",1.5);
    searchbtn->setParent(this);
    searchbtn->move(100,280);
    connect(searchbtn,&QPushButton::clicked,[=](){
        searchbtn->zoom1();
        searchbtn->zoom2();
        info_window * info = new info_window(this->id,"search");
        connect(info,&info_window::clientshow,[=](){
            this->show();
        });
        QTimer::singleShot(300,this,[=](){
            this->hide();
            info->setGeometry(this->geometry());
            info->show();
        });
    });

    mypushbutton * editbtn=new mypushbutton(":/edit",1.5);
    editbtn->setParent(this);
    editbtn->move(330,280);
    connect(editbtn,&QPushButton::clicked,[=](){
        editbtn->zoom1();
        editbtn->zoom2();
        info_window * info = new info_window(this->id,"edit");
        connect(info,&info_window::clientshow,[=](){
            this->show();
        });
        QTimer::singleShot(300,this,[=](){
            this->hide();
            info->setGeometry(this->geometry());
            info->show();
        });
    });
}
