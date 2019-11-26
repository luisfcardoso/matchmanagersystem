#include "dbusers.h"

DBUsers::DBUsers()
{

}

void DBUsers::insertUser(QString cpf, QString password, int privilege, QString cardNumber, QString code, QString expirationMonth, QString expirationYear) {
    Connection::getInstance();

    QSqlQuery query;
    QString querySent= "INSERT INTO users (cpf, password, privilege, cardNumber, securityCardCode, expirationCardMonth, expirationCardYear ) VALUES ( :cpf, :password, :privilege, :cardNumber , :securityCardCode, :expirationCardMonth, :expirationCardYear)";
    query.prepare(querySent);

    query.bindValue(":cpf", cpf);
    query.bindValue(":password", password);
    query.bindValue(":privilege", privilege);
    query.bindValue(":cardNumber", cardNumber);
    query.bindValue(":securityCardCode", code);
    query.bindValue(":expirationCardMonth", expirationMonth);
    query.bindValue(":expirationCardYear", expirationYear);

    query.exec();

}

Users DBUsers::getUser(QString cpf) {
    Connection::getInstance();

    QSqlQuery query;
    QString querySent= "select * from users where cpf = '" + cpf + "';";
    query.exec(querySent);
    query.next();

    Users user;
    user.Users::Setid(query.value(0).toInt());
    user.Users::Setcpf(query.value(1).toString());
    user.Users::Setpassword(query.value(2).toString());
    user.Users::SetprivilegeID(query.value(3).toInt());
    user.Users::SetcardNumber(query.value(4).toString());
    user.Users::SetsecurityCardNumber(query.value(5).toString());
    user.Users::SetexpirationCardMonth(query.value(6).toString());
    user.Users::SetexpirationCardYear(query.value(7).toString());

    return user;
}

void DBUsers::deleteUser(QString cpf) {
    Connection::getInstance();

    QSqlQuery query;
    QString querySent= "delete from users where cpf = '" + cpf + "';";
    query.exec(querySent);
}
