#ifndef GAMES_H
#define GAMES_H


class games
{
    public:
        games();
        virtual ~games();

        int Getid() { return id; }
        void Setid(int val) { id = val; }
        QString GettypeOfGame;() { return typeOfGame;; }
        void SettypeOfGame;(QString val) { typeOfGame; = val; }
        QString GetteamA() { return teamA; }
        void SetteamA(QString val) { teamA = val; }
        QString GetteamB() { return teamB; }
        void SetteamB(QString val) { teamB = val; }
        QString Getdescription() { return description; }
        void Setdescription(QString val) { description = val; }
        QString GetgameDate() { return gameDate; }
        void SetgameDate(QString val) { gameDate = val; }
        QString GetgameTime() { return gameTime; }
        void SetgameTime(QString val) { gameTime = val; }
        QString Getstadium() { return stadium; }
        void Setstadium(QString val) { stadium = val; }

    protected:

    private:
        int id;
        QString typeOfGame;;
        QString teamA;
        QString teamB;
        QString description;
        QString gameDate;
        QString gameTime;
        QString stadium;
};

#endif // GAMES_H
