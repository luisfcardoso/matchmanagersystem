#ifndef USERSERVICES_H
#define USERSERVICES_H

#include<QString>
#include<dbusers.h>
#include<users.h>

class userServices
{
public:
    userServices();

    bool authenticate(QString cpf, QString password);
    QString deleteUser(QString cpf, QString password);
    QString addUser(QString cpf, QString password, int privilege, QString cardNumber, QString code, QString expirationMonth, QString expirationYear);
    Users getUser(QString cpf);
};

#endif // USERSERVICES_H
