#ifndef MATCH_MANAGER_H
#define MATCH_MANAGER_H

#include <string>
#include <iostream>
#include <assert.h>

#include "Customer.h"

class MatchManager : public Customer
{
    public:

        MatchManager(std::string cpf, std::string password, std::string cardNumber, std::string securityCode, std::string expirationDateCardMonth, std::string expirationDateCardYear) : Customer::Customer(cpf, password, cardNumber,securityCode, expirationDateCardMonth, expirationDateCardYear) {}

        MatchManager(std::string cpf, std::string password) : Customer::Customer(cpf, password) {}

        MatchManager(std::string cpf) : Customer::Customer(cpf) {}

        std::string registerMatchManager();

        bool checkIfItIsAManager();

};
#endif
