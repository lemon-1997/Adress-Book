/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_infowindow
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *infowindow)
    {
        if (infowindow->objectName().isEmpty())
            infowindow->setObjectName(QStringLiteral("infowindow"));
        infowindow->resize(800, 600);
        menubar = new QMenuBar(infowindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        infowindow->setMenuBar(menubar);
        centralwidget = new QWidget(infowindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        infowindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(infowindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        infowindow->setStatusBar(statusbar);

        retranslateUi(infowindow);

        QMetaObject::connectSlotsByName(infowindow);
    } // setupUi

    void retranslateUi(QMainWindow *infowindow)
    {
        infowindow->setWindowTitle(QApplication::translate("infowindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class infowindow: public Ui_infowindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H
