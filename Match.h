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

	int hour;

	int minute;

	int day;

	int month;

	int year;

	float ticketPrice;

	std::string stadiumName;

	std::string city;

	std::string state;

	std::string ownerCPF;

	std::string teamA;

	std::string teamB;

	int quantityOfSales;

	std::string description;

	enum MatchType {
        Local,
        Estadual,
        Nacional,
        Internacional
    };

public:

    Match(int hour, int minute, int day, int month, int year, float ticketPrice, std::string stadiumName, std::string city, std::string state, std::string ownerCPF, std::string teamA, std::string teamB, int quantityOfSales, std::string description);

	int searchMatch(int beginDay, int beginMonth, int beginYear, int endDay, int endMonth, int endYear, int endDate, std::string city, std::string state);

};

#endif
