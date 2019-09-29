#include <string>
#include <iostream>
#include <stdexcept>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "Customer.h"

Customer::Customer(std::string cpf, std::string password, std::string cardNumber, std::string securityCode, std::string expirationDateCardMonth, std::string expirationDateCardYear) {
    if((cpf.size() == 11) && (cpf.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->cpf= cpf;
    } else {
        std::string error = "CPF must have 11 characters and have just numbers.";
        throw error;
    }

    if((password.size() >= 3)) { // Check if the input has the right number of character
        this->password = password;
    } else {
        std::string error = "Password must have at least 3 characters.";
        throw error;
    }

    if((cardNumber.size() == 16) && (cardNumber.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->cardNumber = cardNumber;
    } else {
        std::string error = "The card number must have 16 characters and have just numbers.";
        throw error;
    }

    if((securityCode.size() == 3) && (securityCode.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->securityCode = securityCode;
    } else {
        std::string error = "The security code must have 3 characters and have just numbers.";
        throw error;
    }

    if((expirationDateCardMonth == "01") || (expirationDateCardMonth == "02") || (expirationDateCardMonth == "03") || (expirationDateCardMonth == "04") ||
       (expirationDateCardMonth == "05") || (expirationDateCardMonth == "06") || (expirationDateCardMonth == "07") || (expirationDateCardMonth == "08") ||
       (expirationDateCardMonth == "09") || (expirationDateCardMonth == "10") || (expirationDateCardMonth == "11") || (expirationDateCardMonth == "12")) { // Check if the input has the right number of character and has just numbers
        this->expirationDateCardMonth = expirationDateCardMonth;
    } else {
        std::string error = "The security code must have 3 characters and have just numbers.";
        throw error;
    }

    if((expirationDateCardYear.size() == 2) && (expirationDateCardYear.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->expirationDateCardYear = expirationDateCardYear;
    } else {
        std::string error = "The year of the expiration date must have 2 characters and have just numbers.";
        throw error;
    }

}

Customer::Customer(std::string cpf, std::string password) {
    if((cpf.size() == 11) && (cpf.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->cpf= cpf;
    } else {
        std::string error = "CPF must have 11 characters and have just numbers.";
        throw error;
    }

    if((password.size() >= 3)) { // Check if the input has the right number of character
        this->password = password;
    } else {
        std::string error = "Password must have at least 3 characters.";
        throw error;
    }

    this->cardNumber = "";
    this->securityCode = "";
    this->expirationDateCardMonth = "";
    this->expirationDateCardYear = "";
}

Customer::Customer(std::string cpf) {
    if((cpf.size() == 11) && (cpf.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->cpf= cpf;
    } else {
        std::string error = "CPF must have 11 characters and have just numbers.";
        throw error;
    }

    this->password = "";
    this->cardNumber = "";
    this->securityCode = "";
    this->expirationDateCardMonth = "";
    this->expirationDateCardYear = "";
}

std::string Customer::registerUser()
{
    if((this->cardNumber != "") && (this->securityCode != "") && (this->expirationDateCardMonth != "") && (this->expirationDateCardYear != "")) {
        // Connect to the database
        MYSQL* conn;
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

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
    } else {
        return "The customer wasn't registered! Please, fill out all fields.";
    }
}

std::string Customer::authenticate()
{
    if(this->password != "") {

        // Connect to the database
        MYSQL* conn;
        MYSQL_ROW row;
        MYSQL_RES* res;

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

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

                while((row = mysql_fetch_row(res))) {
                    if((row[1] == this->password)) {
                        return "You logged in!";
                    } else {
                        return "You weren't log in! Please check the cpf and the password.";
                    }
                }
           } else {
               return "You weren't log in! Please check the cpf and the password.";
           }
        } else {
            return "You weren't log in! Please try again later. The database is offline.";
        }

        return "You weren't log in! Please try again later.";

    } else {
        return "The customer wasn't registered! Please, fill out the password.";
    }

}

std::string Customer::removeUser()
{
    // Connect to the database
    MYSQL* conn;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "192.168.25.143", "luis","123456","matchmanagersystem", 0, NULL, 0);

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
