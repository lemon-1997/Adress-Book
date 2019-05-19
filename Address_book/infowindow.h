#ifndef INFOWINDOW_H
#define INFOWINDOW_H

#include <QMainWindow>

namespace Ui {
class infowindow;
}

class infowindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit infowindow(QString id,QString action,QWidget *parent = nullptr);
    ~infowindow();

private:
    Ui::infowindow *ui;

signals:
    void clientshow();
};

#endif // INFOWINDOW_H
