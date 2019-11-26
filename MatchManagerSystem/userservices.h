#ifndef USERSERVICES_H
#define USERSERVICES_H

#include<QString>
#include<dbusers.h>

class userServices
{
public:
    userServices();

    bool authenticate(QString cpf, QString password);
    QString deleteUser(QString cpf, QString password);
    QString addUser(QString cpf, QString password, int privilege, QString cardNumber, QString code, QString expirationMonth, QString expirationYear);
};

#endif // USERSERVICES_H
