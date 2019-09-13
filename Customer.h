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
	string cpf;

	string password;

	int cardNumber;

	int securityCode;

	int expirationDateCard;


public:
	void register(string cpf, string password, string cardNumber, string securityCode, int expirationDateCard);

	void authenticate(string cpf, char password);

	void unsubscribe(string cpf, char password);

};
#endif
