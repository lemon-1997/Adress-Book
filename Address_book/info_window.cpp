#include <QTimer>
#include <QMessageBox>
#include <QDebug>
#include "mypushbutton.h"
#include "info_window.h"
#include "ui_info_window.h"
#include "mysql.h"

info_window::info_window(QString id,QString action,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::info_window)
{
    ui->setupUi(this);
    this->user_name=id;
    this->setWindowTitle(id+"的通讯录");
    this->setWindowIcon(QIcon(":/icon"));
    this->setFixedSize(600,500);

    mypushbutton * backbtn=new mypushbutton(":/back",1);
    backbtn->setParent(this);
    backbtn->move(450,100);
    connect(backbtn,&QPushButton::clicked,[=](){
        backbtn->zoom1();
        backbtn->zoom2();
        QTimer::singleShot(300,this,[=](){
            this->close();
            emit clientshow();
        });
    });

    if(action=="add")
    {
        ui->searchlineEdit->setEnabled(false);
        ui->searchpushButton->setEnabled(false);
        ui->idradioButton->setEnabled(false);
        ui->nameradioButton->setEnabled(false);

        mypushbutton * addbtn=new mypushbutton(":/add",1.5);
        addbtn->setParent(this);
        addbtn->move(400,200);
        connect(addbtn,&QPushButton::clicked,[=](){
            addbtn->zoom1();
            addbtn->zoom2();
            QString sql;
            QSqlQuery query;

            if(ui->idlineEdit->text()==""){
                QMessageBox::information(this, "添加失败", "请输入学号");
            }
            else{
                sql = "select * from information where user_name = '" + user_name + "'and pid ='" + ui->idlineEdit->text() + "'";
                query.exec(sql);
                if(query.next()){
                    QMessageBox::information(this, "添加失败", "该学号已存在");
                }
                else{
                    QString psex;
                    if(ui->maxcheckBox->isChecked()){
                        psex="男";
                    }
                    else if(ui->womancheckBox->isChecked()){
                        psex="女";
                    }
                    sql = "insert into information values( '" + user_name +
                            "','"+ui->idlineEdit->text()+"','"+ui->namelineEdit->text()+
                            "','"+psex+"','"+ui->birthdaylineEdit->text()+"','"+
                            ui->numberlineEdit->text()+"','"+ui->QQVXlineEdit->text()+
                            "','"+ui->emaillineEdit->text()+"','"+ui->addresslineEdit->text()+"');";
                    query.exec(sql);
                    qDebug()<<sql;
                    QMessageBox::information(this, "添加成功", "已收进你的通讯录");
                }
            }
        });
    }

    if(action=="remove")
    {
        ui->idlineEdit->setEnabled(false);
        ui->namelineEdit->setEnabled(false);
        ui->maxcheckBox->setEnabled(false);
        ui->womancheckBox->setEnabled(false);
        ui->birthdaylineEdit->setEnabled(false);
        ui->numberlineEdit->setEnabled(false);
        ui->QQVXlineEdit->setEnabled(false);
        ui->emaillineEdit->setEnabled(false);
        ui->addresslineEdit->setEnabled(false);

        connect(ui->searchpushButton,&QPushButton::clicked,[=](){
            QString sql;
            if(ui->nameradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pname ='" + ui->searchlineEdit->text() + "'";
            }
            else if(ui->idradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pid ='" + ui->searchlineEdit->text() + "'";
            }
            else{
                sql = "no check";
            }
            if(sql=="no check"){
                QMessageBox::information(this, "查询失败", "请勾选查询方式");
            }
            else{
                qDebug()<<sql;
                QSqlQuery query;
                query.exec(sql);
                if(query.next())
                {
                    ui->idlineEdit->setText(query.value(1).toString());
                    ui->namelineEdit->setText(query.value(2).toString());
                    ui->birthdaylineEdit->setText(query.value(4).toString());
                    ui->numberlineEdit->setText(query.value(5).toString());
                    ui->QQVXlineEdit->setText(query.value(6).toString());
                    ui->emaillineEdit->setText(query.value(7).toString());
                    ui->addresslineEdit->setText(query.value(8).toString());
                    if(query.value(3).toString()=="女"){
                        ui->womancheckBox->setChecked(true);
                    }
                    else if(query.value(3).toString()=="男"){
                        ui->maxcheckBox->setChecked(true);
                    }
                }
                else
                {
                    QMessageBox::information(this, "查询失败", "请检查输入是否正确");
                }
            }
        });

        mypushbutton * removebtn=new mypushbutton(":/remove",1.5);
        removebtn->setParent(this);
        removebtn->move(400,200);
        connect(removebtn,&QPushButton::clicked,[=](){
            removebtn->zoom1();
            removebtn->zoom2();
            if(ui->idlineEdit->text()==""){
                QMessageBox::information(this, "删除失败", "请先查询再确认是否删除");
            }
            else{
                QString sql;
                sql="delete from information where user_name = '" + user_name + "'and pid ='" + ui->idlineEdit->text() + "'";
                qDebug()<<sql;
                QMessageBox::StandardButton rb = QMessageBox::question(this, "删除", "你确定要删除当前学号吗?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
                if(rb == QMessageBox::Yes)
                {
                    QSqlQuery query;
                    query.exec(sql);
                    QMessageBox::information(this, "删除成功", "该学号已从通讯录删除");
                }
            }
        });
    }

    if(action=="search")
    {
        ui->idlineEdit->setEnabled(false);
        ui->namelineEdit->setEnabled(false);
        ui->maxcheckBox->setEnabled(false);
        ui->womancheckBox->setEnabled(false);
        ui->birthdaylineEdit->setEnabled(false);
        ui->numberlineEdit->setEnabled(false);
        ui->QQVXlineEdit->setEnabled(false);
        ui->emaillineEdit->setEnabled(false);
        ui->addresslineEdit->setEnabled(false);

        mypushbutton * searchbtn=new mypushbutton(":/search",1.5);
        searchbtn->setParent(this);
        searchbtn->move(400,200);
        connect(searchbtn,&QPushButton::clicked,[=](){
            searchbtn->zoom1();
            searchbtn->zoom2();
            QString sql;
            if(ui->nameradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pname ='" + ui->searchlineEdit->text() + "'";
            }
            else if(ui->idradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pid ='" + ui->searchlineEdit->text() + "'";
            }
            else{
                sql = "no check";
            }
            if(sql=="no check"){
                QMessageBox::information(this, "查询失败", "请勾选查询方式");
            }
            else{
                qDebug()<<sql;
                QSqlQuery query;
                query.exec(sql);
                if(query.next())
                {
                    ui->idlineEdit->setText(query.value(1).toString());
                    ui->namelineEdit->setText(query.value(2).toString());
                    ui->birthdaylineEdit->setText(query.value(4).toString());
                    ui->numberlineEdit->setText(query.value(5).toString());
                    ui->QQVXlineEdit->setText(query.value(6).toString());
                    ui->emaillineEdit->setText(query.value(7).toString());
                    ui->addresslineEdit->setText(query.value(8).toString());
                    if(query.value(3).toString()=="女"){
                        ui->womancheckBox->setChecked(true);
                    }
                    else if(query.value(3).toString()=="男"){
                        ui->maxcheckBox->setChecked(true);
                    }
                }
                else
                {
                    QMessageBox::information(this, "查询失败", "请检查输入是否正确");
                }
            }
        });
    }

    if(action=="edit")
    {
        ui->idlineEdit->setEnabled(false);
        mypushbutton * editbtn=new mypushbutton(":/edit",1.5);
        editbtn->setParent(this);
        editbtn->move(400,200);
        connect(ui->searchpushButton,&QPushButton::clicked,[=](){
            QString sql;
            if(ui->nameradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pname ='" + ui->searchlineEdit->text() + "'";
            }
            else if(ui->idradioButton->isChecked()){
                sql = "select * from information where user_name = '" + user_name + "'and pid ='" + ui->searchlineEdit->text() + "'";
            }
            else{
                sql = "no check";
            }
            if(sql=="no check"){
                QMessageBox::information(this, "查询失败", "请勾选查询方式");
            }
            else{
                qDebug()<<sql;
                QSqlQuery query;
                query.exec(sql);
                if(query.next())
                {
                    ui->idlineEdit->setText(query.value(1).toString());
                    ui->namelineEdit->setText(query.value(2).toString());
                    ui->birthdaylineEdit->setText(query.value(4).toString());
                    ui->numberlineEdit->setText(query.value(5).toString());
                    ui->QQVXlineEdit->setText(query.value(6).toString());
                    ui->emaillineEdit->setText(query.value(7).toString());
                    ui->addresslineEdit->setText(query.value(8).toString());
                    if(query.value(3).toString()=="女"){
                        ui->womancheckBox->setChecked(true);
                    }
                    else if(query.value(3).toString()=="男"){
                        ui->maxcheckBox->setChecked(true);
                    }
                }
                else
                {
                    QMessageBox::information(this, "查询失败", "请检查输入是否正确");
                }
            }
        });
        connect(editbtn,&QPushButton::clicked,[=](){
            editbtn->zoom1();
            editbtn->zoom2();
            if(ui->idlineEdit->text()==""){
                QMessageBox::information(this, "修改失败", "请先查询后再修改");
            }
            else{
                QString psex;
                if(ui->maxcheckBox->isChecked()){
                    psex="男";
                }
                else if(ui->womancheckBox->isChecked()){
                    psex="女";
                }
                QString sql;
                sql="update information set pname='"+ui->namelineEdit->text()+
                    "',psex='"+psex+"',pbirthday='"+ui->birthdaylineEdit->text()+
                    "',pnumber='"+ui->numberlineEdit->text()+"',pQQVX='"+ui->QQVXlineEdit->text()+
                    "',pemail='"+ui->emaillineEdit->text()+"',paddress='"+ui->addresslineEdit->text()+
                    "' where user_name = '" + user_name + "'and pid ='" + ui->idlineEdit->text() + "'";
                qDebug()<<sql;
                QMessageBox::StandardButton rb = QMessageBox::question(this, "修改", "你确定要修改当前学号吗?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
                if(rb == QMessageBox::Yes)
                {
                    QSqlQuery query;
                    query.exec(sql);
                    QMessageBox::information(this, "修改成功", "该学号数据已更新");
                }
            }
        });
    }
}

info_window::~info_window()
{
    delete ui;
}
