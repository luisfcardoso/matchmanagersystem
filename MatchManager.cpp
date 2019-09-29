#include <string>
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "MatchManager.h"

std::string MatchManager::registerMatchManager() {
    if((!(this->checkIfItIsAManager())) && (this->checkIfItIsACustomer())) {
        // Connect to the database
        MYSQL* conn;

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

        // Building query
        std::string query = "insert into matchmanager (cpf) values ('";
        query = query + this->getCPF() + "')";

        // Commit query
        int qstate = 0;

        if (conn) {
            const char* q = query.c_str();
            qstate = mysql_query(conn, q);

           if (qstate == 0) {
                return "The customer was registered successfully!";
           } else {
                return "The customer wasn't registered! Please check the values you insert or if the manager exists.";
           }
        } else {
            return "The customer wasn't registered! The database is offline. Please try again later.";
        }

        return "The customer wasn't registered! Please try again later.";

    } else {
        return "The person is already a manager or he/she is not a customer at all.";
    }


}

bool MatchManager::checkIfItIsAManager() {

    // Connect to the database
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

    // Building query
    std::string query = "SELECT * FROM matchmanager where cpf ='";
    query = query + this->getCPF() + "'";

    // Commit query
    int qstate = 0;

    if (conn) {

        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

       if (qstate == 0) {

            res = mysql_store_result(conn);

            while((row = mysql_fetch_row(res))) {
                if((row[0])) {
                    return true;
                } else {
                    return false;
                }
            }
       } else {
           return false;
       }
    } else {
        return false;
    }
    return false;

}
