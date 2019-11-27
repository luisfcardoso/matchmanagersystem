#include "dbtypeofgame.h"

dbTypeOfGame::dbTypeOfGame()
{

}

int getTypeOfGameID (QString type) {
    Connection::getInstance();

    QSqlQuery query;
    QString querySent= "select * from gameTypes where type = '" + type  + "';";
    query.exec(querySent);
    query.next();

    return query.value(0).toInt();
}
