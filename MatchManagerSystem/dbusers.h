#ifndef DBUSER_H
#define DBUSER_H

#include<connection.h>
#include<users.h>

class DBUsers
{

public:
    DBUsers();
    void insertUser(QString cpf, QString password, int privilege, QString cardNumber, QString code, QString expirationMonth, QString expirationYear);
    Users getUser(QString cpf);
    void deleteUser(QString cpf);
};

#endif // DBUSER_H
