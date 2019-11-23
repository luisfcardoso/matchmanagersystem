#ifndef MATCH_H
#define MATCH_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MatchManager.h"
#include "Ticket.h"

class Match
{
private:
	int matchID;

	std::string time;

	float ticketPrice;

	std::string stadiumName;

	std::string city;

	std::string state;

	MatchManager owner;

	int matchType;

	std::string teams[];

	int tickets[];

	std::string name;

	enum MatchType {
        Local,
        Estadual,
        Nacional,
        Internacional
    };

public:
<<<<<<< HEAD

    Match();

	bool searchMatch(int beginDay, int beginMonth, int beginYear, int endDay, int endMonth, int endYear, std::string city, std::string state);
    /*
	void setMatchID(int matchID) { this->cpf = cpf; }
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
	std::string getExpirationDateCardYear() { return expirationDateCardYear; } */
=======
	int searchMatch(int beginDate, int endDate, std::string city, std::string state);
>>>>>>> parent of 0829583... Update match class

};

#endif
