/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_name;
    QPushButton *pushButton_login;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label_name;
    QPushButton *pushButton_signup;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_name = new QLineEdit(centralWidget);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(140, 80, 201, 21));
        pushButton_login = new QPushButton(centralWidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(220, 180, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(15);
        pushButton_login->setFont(font);
        pushButton_login->setIconSize(QSize(20, 20));
        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(70, 130, 61, 21));
        lineEdit_password = new QLineEdit(centralWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(140, 130, 201, 21));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label_name = new QLabel(centralWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(70, 80, 71, 20));
        pushButton_signup = new QPushButton(centralWidget);
        pushButton_signup->setObjectName(QStringLiteral("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(80, 180, 101, 41));
        pushButton_signup->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton_login->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", 0));
        label_password->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#dedede;\">\345\257\206\347\240\201\357\274\232</span></p></body></html>", 0));
        lineEdit_password->setInputMask(QString());
        label_name->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#dedede;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", 0));
        pushButton_signup->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
