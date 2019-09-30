#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Match.h"
#include "MatchManager.h"

class ManageMatch : public Match
{
public:
    ManageMatch() : Match::Match() {}

	std::string addMatch(std::string name, std::string time, float ticketPrice, std::string stadiumName, std::string city, std::string state, MatchManager owner, int matchType, std::string teams[], int numberOfTickets);

	std::string updateMatch(int matchID, int parameter, std::string value);

	void removeMatch(int matchID);

};
