#include "connection.h"

Connection* Connection::instance = nullptr;

Connection* Connection::getInstance()
{
    if (instance == nullptr)
    {
        instance = new Connection();

        QSqlDatabase databaseInst = QSqlDatabase::addDatabase("QSQLITE");
        databaseInst.setDatabaseName("C:/Users/luis_/Documents/matchmanagersystem/MatchManagerSystem/db/matchmanager.db");

        if(!databaseInst.open()) {
            instance->setConnected("Não Conectado");
        } else {
            instance->setConnected("Conectado");
        }

        instance->setDatabase(databaseInst);
    }

    return instance;
}

Connection::Connection() {}




