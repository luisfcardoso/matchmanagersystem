#ifndef DBGAMES_H
#define DBGAMES_H

#include<QString>
#include<games.h>

class dbGames
{
    public:
        dbGames();
        void insertGame(games game);
        games getGame(int id);
        void deleteGame(int id);
};

#endif // DBGAMES_H
