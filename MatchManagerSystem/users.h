#ifndef USERS_H
#define USERS_H

#include<string>
#include<QString>

class Users
{
    public:
        Users();

        int Getid() { return id; }
        void Setid( int val) { id = val; }
        QString Getcpf() { return cpf; }
        void Setcpf(QString val) { cpf = val; }
        QString Getpassword() { return password; }
        void Setpassword(QString val) { password = val; }
        int GetprivilegeID() { return privilegeID; }
        void SetprivilegeID(int val) { privilegeID = val; }
        QString GetcardNumber() { return cardNumber; }
        void SetcardNumber(QString val) { cardNumber = val; }
        QString GetsecurityCardNumber() { return securityCardNumber; }
        void SetsecurityCardNumber(QString val) { securityCardNumber = val; }
        QString GetexpirationCardMonth() { return expirationCardMonth; }
        void SetexpirationCardMonth(QString val) { expirationCardMonth = val; }
        QString GetexpirationCardYear() { return expirationCardYear; }
        void SetexpirationCardYear(QString val) { expirationCardYear = val; }

    protected:

    private:
        int id;
        QString cpf;
        QString password;
        int privilegeID;
        QString cardNumber;
        QString securityCardNumber;
        QString expirationCardMonth;
        QString expirationCardYear;
};

#endif // USERS_H
