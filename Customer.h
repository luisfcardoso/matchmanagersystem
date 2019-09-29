#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

class Customer
{
private:
	std::string cpf;

	std::string password;

	std::string cardNumber;

	std::string securityCode;

	std::string expirationDateCardMonth;

	std::string expirationDateCardYear;


public:

    Customer(std::string cpf, std::string password, std::string cardNumber, std::string securityCode, std::string expirationDateCardMonth, std::string expirationDateCardYear);

	std::string registerUser();

	std::string authenticate(std::string cpf, std::string password);

	std::string removeUser(std::string cpf);

};
#endif
