#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "Customer.h"

Customer::Customer(std::string cpf, std::string password, std::string cardNumber, std::string securityCode, std::string expirationDateCardMonth, std::string expirationDateCardYear) {
    this->cpf= cpf;
    this->password = password;
    this->cardNumber = cardNumber;
    this->securityCode = securityCode;
    this->expirationDateCardMonth = expirationDateCardMonth;
    this->expirationDateCardYear = expirationDateCardYear;
}

std::string Customer::registerUser()
{
    // Connect to the database
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

    // TO DO:  Check if the inputs are in the right form and implement try-catch
    // Building query
    std::string query = "INSERT INTO customers (cpf, password, cardNumber, securityCode, expirationDateCardMonth, expirationDateCardYear) VALUES ('";
    query = query + this->cpf + "', '";
    query = query + this->password + "', '";
    query = query + this->cardNumber + "', '";
    query = query + this->securityCode +"', '";
    query = query + this->expirationDateCardMonth + "', '";
    query = query + this->expirationDateCardYear + "')";

    // Commit query
    int qstate = 0;

    if (conn) {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

       if (qstate == 0) {
            return "The customer was registered successfully!";
       } else {
           return "The customer wasn't registered! Please check the values you insert or if the customer already exists.";
       }
    } else {
        return "The customer wasn't registered! The database is offline. Please try again later.";
    }

    return "The customer wasn't registered! Please try again later.";
}

std::string Customer::authenticate()
{
    // Connect to the database
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

    // TO DO:  Check if the inputs are in the right form and implement try-catch
    // Building query
    std::string query = "SELECT * FROM customers where cpf ='";
    query = query + this->cpf + "'";

    // Commit query
    int qstate = 0;

    if (conn) {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

       if (qstate == 0) {
            res = mysql_store_result(conn);
            row = mysql_fetch_row(res);

            if(row[1] == this->password) {
                return "You logged in!";
            } else {
                return "You weren't log in! Please check the cpf and the password.";
            }
       } else {
           return "You weren't log in! Please check the cpf and the password.";
       }
    } else {
        return "You weren't log in! Please try again later. The database is offline.";
    }

    return "You weren't log in! Please try again later.";

}

std::string Customer::removeUser()
{
    // Connect to the database
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

    // TO DO:  Check if the inputs are in the right form and implement try-catch
    // Building query
    std::string query = "DELETE FROM customers where cpf ='";
    query = query + this->cpf + "'";

    // Commit query
    int qstate = 0;

    if (conn) {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

       if (qstate == 0) {
            return "The customer was removed successfully!";
       } else {
            return "The customer wasn't removed! Please check the values you insert or if the customer exists." + query;
       }
    } else {
        return "The customer wasn't removed! The database is offline. Please try again later.";
    }

    return "The customer wasn't removed! Please try again later.";
}
