#ifndef MANAGE_MATCH _H
#define MANAGE_MATCH _H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Match.h"
#include "Date.h"
#include "MatchManager.h"

class ManageMatch  : public Match
{
public:
	string addMatch(string name, Date time, float ticketPrice, string stadiumName, string city, string state, MatchManager owner, int matchType, string teams[], int numberOfTickets);

	string updateMatch(int matchID, string parameter, string value);

	void removeMatch(int matchID);

};
#endif
