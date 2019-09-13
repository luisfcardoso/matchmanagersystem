#ifndef MATCH_H
#define MATCH_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Date.h"
#include "MatchManager.h"
#include "Ticket.h"
#include "MatchType.h"

class Match
{
private:
	int matchID;

	Date time;

	float ticketPrice;

	string stadiumName;

	string city;

	string state;

	MatchManager owner;

	int matchType;

	string teams[];

	Ticket tickets[];

	string name;

	MatchType matchType;

public:
	Match searchMatch(int beginDate, int endDate, string city, string state);

};
#endif
