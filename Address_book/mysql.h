#ifndef MYSQL_H
#define MYSQL_H

#include <QObject>
#include <QtSql>
#include <QSqlDatabase>

class mysql : public QObject
{
    Q_OBJECT
public:
    explicit mysql(QObject *parent = nullptr);

    bool connDB();
    bool queryDB(const QString &sql);

private:
    QString dbDriver;
    QString dbName;
    QString userName;
    QString userPwd;
    QString hostName;

signals:

public slots:
};

#endif // MYSQL_H
