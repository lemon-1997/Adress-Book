/********************************************************************************
** Form generated from reading UI file 'info_window.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_WINDOW_H
#define UI_INFO_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info_window
{
public:
    QWidget *centralwidget;
    QLabel *idlabel;
    QLineEdit *searchlineEdit;
    QRadioButton *nameradioButton;
    QRadioButton *idradioButton;
    QPushButton *searchpushButton;
    QLineEdit *idlineEdit;
    QLineEdit *namelineEdit;
    QLabel *namelabel;
    QCheckBox *maxcheckBox;
    QCheckBox *womancheckBox;
    QLabel *idlabel_2;
    QLabel *idlabel_3;
    QLineEdit *birthdaylineEdit;
    QLabel *idlabel_4;
    QLineEdit *numberlineEdit;
    QLabel *idlabel_5;
    QLineEdit *QQVXlineEdit;
    QLabel *idlabel_6;
    QLineEdit *emaillineEdit;
    QLabel *idlabel_7;
    QLineEdit *addresslineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *info_window)
    {
        if (info_window->objectName().isEmpty())
            info_window->setObjectName(QStringLiteral("info_window"));
        info_window->resize(800, 600);
        centralwidget = new QWidget(info_window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        idlabel = new QLabel(centralwidget);
        idlabel->setObjectName(QStringLiteral("idlabel"));
        idlabel->setGeometry(QRect(50, 82, 41, 31));
        searchlineEdit = new QLineEdit(centralwidget);
        searchlineEdit->setObjectName(QStringLiteral("searchlineEdit"));
        searchlineEdit->setGeometry(QRect(50, 30, 151, 20));
        nameradioButton = new QRadioButton(centralwidget);
        nameradioButton->setObjectName(QStringLiteral("nameradioButton"));
        nameradioButton->setGeometry(QRect(330, 30, 89, 16));
        idradioButton = new QRadioButton(centralwidget);
        idradioButton->setObjectName(QStringLiteral("idradioButton"));
        idradioButton->setGeometry(QRect(430, 30, 89, 16));
        searchpushButton = new QPushButton(centralwidget);
        searchpushButton->setObjectName(QStringLiteral("searchpushButton"));
        searchpushButton->setGeometry(QRect(230, 30, 75, 23));
        idlineEdit = new QLineEdit(centralwidget);
        idlineEdit->setObjectName(QStringLiteral("idlineEdit"));
        idlineEdit->setGeometry(QRect(110, 90, 261, 20));
        namelineEdit = new QLineEdit(centralwidget);
        namelineEdit->setObjectName(QStringLiteral("namelineEdit"));
        namelineEdit->setGeometry(QRect(110, 130, 261, 20));
        namelabel = new QLabel(centralwidget);
        namelabel->setObjectName(QStringLiteral("namelabel"));
        namelabel->setGeometry(QRect(50, 120, 51, 31));
        maxcheckBox = new QCheckBox(centralwidget);
        maxcheckBox->setObjectName(QStringLiteral("maxcheckBox"));
        maxcheckBox->setGeometry(QRect(110, 170, 41, 16));
        womancheckBox = new QCheckBox(centralwidget);
        womancheckBox->setObjectName(QStringLiteral("womancheckBox"));
        womancheckBox->setGeometry(QRect(170, 170, 31, 16));
        idlabel_2 = new QLabel(centralwidget);
        idlabel_2->setObjectName(QStringLiteral("idlabel_2"));
        idlabel_2->setGeometry(QRect(50, 160, 31, 31));
        idlabel_3 = new QLabel(centralwidget);
        idlabel_3->setObjectName(QStringLiteral("idlabel_3"));
        idlabel_3->setGeometry(QRect(50, 200, 61, 31));
        idlabel_3->setTextFormat(Qt::AutoText);
        birthdaylineEdit = new QLineEdit(centralwidget);
        birthdaylineEdit->setObjectName(QStringLiteral("birthdaylineEdit"));
        birthdaylineEdit->setGeometry(QRect(110, 210, 261, 20));
        idlabel_4 = new QLabel(centralwidget);
        idlabel_4->setObjectName(QStringLiteral("idlabel_4"));
        idlabel_4->setGeometry(QRect(50, 240, 61, 31));
        idlabel_4->setTextFormat(Qt::AutoText);
        numberlineEdit = new QLineEdit(centralwidget);
        numberlineEdit->setObjectName(QStringLiteral("numberlineEdit"));
        numberlineEdit->setGeometry(QRect(110, 250, 261, 20));
        idlabel_5 = new QLabel(centralwidget);
        idlabel_5->setObjectName(QStringLiteral("idlabel_5"));
        idlabel_5->setGeometry(QRect(50, 280, 61, 31));
        idlabel_5->setTextFormat(Qt::AutoText);
        QQVXlineEdit = new QLineEdit(centralwidget);
        QQVXlineEdit->setObjectName(QStringLiteral("QQVXlineEdit"));
        QQVXlineEdit->setGeometry(QRect(110, 290, 261, 20));
        idlabel_6 = new QLabel(centralwidget);
        idlabel_6->setObjectName(QStringLiteral("idlabel_6"));
        idlabel_6->setGeometry(QRect(50, 320, 61, 31));
        idlabel_6->setTextFormat(Qt::AutoText);
        emaillineEdit = new QLineEdit(centralwidget);
        emaillineEdit->setObjectName(QStringLiteral("emaillineEdit"));
        emaillineEdit->setGeometry(QRect(110, 330, 261, 20));
        idlabel_7 = new QLabel(centralwidget);
        idlabel_7->setObjectName(QStringLiteral("idlabel_7"));
        idlabel_7->setGeometry(QRect(50, 360, 61, 31));
        idlabel_7->setTextFormat(Qt::AutoText);
        addresslineEdit = new QLineEdit(centralwidget);
        addresslineEdit->setObjectName(QStringLiteral("addresslineEdit"));
        addresslineEdit->setGeometry(QRect(110, 370, 261, 20));
        info_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(info_window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        info_window->setMenuBar(menubar);
        statusbar = new QStatusBar(info_window);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        info_window->setStatusBar(statusbar);

        retranslateUi(info_window);

        QMetaObject::connectSlotsByName(info_window);
    } // setupUi

    void retranslateUi(QMainWindow *info_window)
    {
        info_window->setWindowTitle(QApplication::translate("info_window", "MainWindow", 0));
        idlabel->setText(QApplication::translate("info_window", "\345\255\246\345\217\267\357\274\232", 0));
        nameradioButton->setText(QApplication::translate("info_window", "\346\214\211\345\247\223\345\220\215\346\237\245\346\211\276", 0));
        idradioButton->setText(QApplication::translate("info_window", "\346\214\211\345\255\246\345\217\267\346\237\245\346\211\276", 0));
        searchpushButton->setText(QApplication::translate("info_window", "\346\237\245\346\211\276", 0));
        namelabel->setText(QApplication::translate("info_window", "\345\247\223\345\220\215\357\274\232", 0));
        maxcheckBox->setText(QApplication::translate("info_window", "\347\224\267", 0));
        womancheckBox->setText(QApplication::translate("info_window", "\345\245\263", 0));
        idlabel_2->setText(QApplication::translate("info_window", "\346\200\247\345\210\253\357\274\232", 0));
        idlabel_3->setText(QApplication::translate("info_window", "\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", 0));
        idlabel_4->setText(QApplication::translate("info_window", "\347\224\265\350\257\235\345\217\267\347\240\201\357\274\232", 0));
        idlabel_5->setText(QApplication::translate("info_window", "QQ|VX\357\274\232", 0));
        idlabel_6->setText(QApplication::translate("info_window", "Email\357\274\232", 0));
        idlabel_7->setText(QApplication::translate("info_window", "\345\234\260\345\235\200\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class info_window: public Ui_info_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_WINDOW_H
