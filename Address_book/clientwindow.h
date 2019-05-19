#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QMainWindow>

class clientwindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit clientwindow(QString id,QWidget *parent = nullptr);
    QString id;
signals:
    void mainshow();

public slots:
};

#endif // CLIENTWINDOW_H
