#include <iostream>
#include <windows.h>
#include <iomanip>
#include <locale>
#include <mysql.h>
#include <sstream>
#include <string>

#include "Match.h"

Match::Match() {
}

<<<<<<< HEAD
bool Match::searchMatch(int beginDay, int beginMonth, int beginYear, int endDay, int endMonth, int endYear, std::string city, std::string state)
{
    if((beginDay != 0) || (beginMonth != 0) || (beginYear != 0) || (endDay != 0) || (endMonth != 0) || (endYear != 0) || (city != "") || (state != "")) {

        MYSQL* conn;
        MYSQL_ROW row;
        MYSQL_RES* res;
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

        if (conn) {
            std::ostringstream beginDateStream;
            beginDateStream << beginYear << "-" << beginMonth << "-" << beginDay << " 00:00:00";

            std::ostringstream endDateStream;
            endDateStream << endYear << "-" << endMonth << "-" << endDay << " 00:00:00";

            std::string beginDate = beginDateStream.str();
            std::string endDate = endDateStream.str();

            std::string query = "SELECT * FROM matches where date > '";
            query = query + beginDate + "' and date < '";
            query = query + endDate + "' and city = '" + city;
            query = query + "' and state = '" + state + "'";

            const char* q = query.c_str();
            int qstate = mysql_query(conn,q);

           if (!qstate) {
                res = mysql_store_result(conn);

                std::cout << "\t Date";
                std::cout << "\t Stadium Name";
                std::cout << "\t City";
                std::cout << "\t State";
                std::cout << "\t Team A";
                std::cout << "\t Team B";
                std::cout << "\t Ticket Price";
                std::cout << "\t Description" << std::endl;

                while ((row = mysql_fetch_row(res))) {

                    std::cout << row[1];
                    std::cout << "\t";
                    std::cout << row[2];
                    std::cout << "\t";
                    std::cout << row[3];
                    std::cout << "\t";
                    std::cout << row[4];
                    std::cout << "\t";
                    std::cout << row[6];
                    std::cout << "\t";
                    std::cout << row[7];
                    std::cout << "\t";
                    std::cout << row[8];
                    std::cout << "\t";
                    std::cout << row[10];
                }

                return true;
            }

        } else {
           std::cout << "Please try again later. Database is offline.";

           return false;
        }
    } else {
        std::cout << "Please, fill out all fields.";

        return false;
    }

    return false;
=======
int Match::searchMatch(int beginDate, int endDate, std::string city, std::string state)
{
	return 0;
>>>>>>> parent of 0829583... Update match class
}
