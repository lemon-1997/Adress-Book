#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QMessageBox>
#include <QBitmap>
#include "mysql.h"
#include "clientwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    int window_x=400,window_y=300;
    ui->setupUi(this);
    this->setFixedSize(window_x,window_y);
    this->setWindowTitle("通讯录");
    this->setWindowIcon(QIcon(":/icon"));

    QPalette palette;
    QPixmap pixmap(":/background");
    pixmap=pixmap.scaled(window_x,window_y);
    palette.setBrush(this->backgroundRole(), QBrush(pixmap));
    this->setPalette(palette);
//    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    connect(ui->pushButton_login,SIGNAL(clicked()),this,SLOT(logined()));
    connect(ui->pushButton_signup,SIGNAL(clicked()),this,SLOT(signup()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::logined()
{
    QString name = ui->lineEdit_name->text();
    QString passwd = ui->lineEdit_password->text();
    QString sql = "select user_name, user_password from users where user_name = '" + name + "'and user_password ='" + passwd + "'";
    mysql db;

    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        clientwindow * client = new clientwindow(query.value(0).toString());
        connect(client,&clientwindow::mainshow,[=](){
            ui->lineEdit_password->clear();
            this->show();
        });
        this->hide();
        client->show();
    }
    else
    {
        QMessageBox::information(this, "登陆失败", "用户名或密码错误");
    }


}

void MainWindow::signup()
{
    QString name = ui->lineEdit_name->text();
    QString passwd = ui->lineEdit_password->text();
    QString str_null = "";
    if(name==str_null||passwd==str_null){
        QMessageBox::information(this, "注册失败", "用户名或密码非空");
        return ;
    }
    if(name.length()>20||passwd.length()>20){
        QMessageBox::information(this, "注册失败", "用户名或密码过长");
        return ;
    }

    QString sql = "select user_name from users where user_name = '" + name +"';";
    mysql db;
    if( db.queryDB(sql) )
    {
        QMessageBox::information(this, "注册失败", "用户名重复");
    }
    else
    {
        sql = "insert into users (user_name, user_password) values ('" + name + "', '" + passwd + "');";
        db.queryDB(sql);
        QMessageBox::information(this, "注册成功", "现在可以登陆了");
    }

}
