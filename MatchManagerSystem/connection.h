#ifndef CONNECTION_H
#define CONNECTION_H

#include<QtSql>
#include<QSqlDatabase>

class Connection
{
public:
    static Connection* getInstance();
    void setConnected(QString msg) {
        this->connected = msg;
    }
    void setDatabase(QSqlDatabase database) {
        this->database = database;
    }

    QSqlDatabase getDatabase() {
        return this->database;
    }

    QString getConnected() {
        return this->connected;
    }

private:
    static Connection* instance;
    QSqlDatabase database;
    QString connected;
    Connection();

};

#endif // CONNECTION_H
