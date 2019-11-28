#include "dbgames.h"
#include<connection.h>

dbGames::dbGames()
{

}

void insertGame(games game) {

}

games getGame(int id) {
    /*Connection::getInstance();

    QSqlQuery query;
    QString querySent= "select * from games where id = '" + QString::number(id) + "';";
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

    return user;*/
}

void deleteGame(int id) {

}
