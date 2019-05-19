#ifndef INFO_WINDOW_H
#define INFO_WINDOW_H

#include <QMainWindow>

namespace Ui {
class info_window;
}

class info_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit info_window(QString id,QString action,QWidget *parent = nullptr);
    ~info_window();
    QString user_name;
signals:
    void clientshow();
private:
    Ui::info_window *ui;
};

#endif // INFO_WINDOW_H
