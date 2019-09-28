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

    // Create connection and insert query
    std::string query = "INSERT INTO customers (cpf, password, cardNumber, securityCode, expirationDateCardMonth, expirationDateCardYear) VALUES ('";
    query = query + this->cpf + "', '";
    query = query + this->password + "', '";
    query = query + this->cardNumber + "', '";
    query = query + this->securityCode +"', '";
    query = query + this->expirationDateCardMonth + "', '";
    query = query + this->expirationDateCardYear + "')";

    int qstate = 0;

    if (conn) {
        const char* q = query.c_str();
        qstate = mysql_query(conn, q);

       if (qstate == 0) {
           return query;
       } else {
            return "The customer wasn't registered! Please check the values you insert.";
       }
    } else {
       return "The customer wasn't registered! The database is offline. Please try again later.";
    }


    return 0;
}

void Customer::authenticate(std::string cpf, std::string password)
{

}

void Customer::unsubscribe(std::string cpf, std::string password)
{
    //TO DO: Delete customer register to the database method with cpf and password as the input
    /*
    if(if customer was removed in the database) {
            return "Customer successfully removed!";
    } else {
        return "The customer cannot be removed. Please try again!";
    } */
}
