#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <iostream>
#include <assert.h>

class Customer
{
protected:
	std::string cpf;

	std::string password;

	std::string cardNumber;

	std::string securityCode;

	std::string expirationDateCardMonth;

	std::string expirationDateCardYear;


public:

    Customer(std::string cpf, std::string password, std::string cardNumber, std::string securityCode, std::string expirationDateCardMonth, std::string expirationDateCardYear);

    Customer(std::string cpf, std::string password);

    Customer(std::string cpf);

	std::string registerUser();

	std::string authenticate();

	std::string removeUser();

	bool checkIfItIsACustomer();

	void setCPF(std::string cpf) { this->cpf = cpf; }
	void setPassword(std::string password) { this->password = password; }
	void setCardNumber(std::string cardNumber) { this->cardNumber = cardNumber; }
	void setSecurityCode(std::string securityCode) { this->securityCode = securityCode; }
	void setExpirationDateCardMonth(std::string expirationDateCardMonth) { this->expirationDateCardMonth = expirationDateCardMonth; }
	void setExpirationDateCardYear(std::string expirationDateCardYear) { this->expirationDateCardYear = expirationDateCardYear; }

	std::string getCPF() { return cpf; }
	std::string getPassword() { return password; }
	std::string getCardNumber() { return cardNumber; }
	std::string getSecurityCode() { return securityCode; }
	std::string getExpirationDateCardMonth() { return expirationDateCardMonth; }
	std::string getExpirationDateCardYear() { return expirationDateCardYear; }

};
#endif
