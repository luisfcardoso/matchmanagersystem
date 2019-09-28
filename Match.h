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
	int searchMatch(int beginDate, int endDate, std::string city, std::string state);

};

#endif
