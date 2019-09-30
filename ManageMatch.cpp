#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "ManageMatch.h"

std::string ManageMatch ::addMatch(std::string name, std::string time, float ticketPrice, std::string stadiumName, std::string city, std::string state, MatchManager owner, int matchType, std::string teams[], int numberOfTickets)
{
/*
    if(hour<24) {
        this->hour= hour;
    } else {
        std::string error = "Hour must have 2 characters, have just numbers and be less than 24.";
        return error;
    }

    if(minute<60) {
        this->minute= minute;
    } else {
        std::string error = "Minute must have 2 characters, have just numbers and be less than 60.";
        return error;
    }

    if(day<32) {
        this->day= day;
    } else {
        std::string error = "Day must have 2 characters, have just numbers and be less than 32.";
        return error;
    }

    if(month<13) {
        this->month= month;
    } else {
        std::string error = "Month must have 2 characstadiumNameters, have just numbers and be less than 12.";
        return error;
    }

    if((year>2018) && (year<2050)) {
        this->year= year;
    } else {
        std::string error = "Year must have 4 characters, have just numbers and be between 2019 and 2050.";
        return error;
    }

    if(stadiumName!="") {
        this->stadiumName= stadiumName;
    } else {
        std::string error = "Please insert a stadium name.";
        return error;
    }

    if(city!="") {
        this->city= city;
    } else {
        std::string error = "Please insert a city.";
        return error;
    }

    if(state!="") {
        this->state= state;
    } else {
        std::string error = "Please insert a state.";
        return error;
    }

    if((cpf.size() == 11) && (cpf.find_first_not_of( "0123456789" ) == std::string::npos)) { // Check if the input has the right number of character and has just numbers
        this->cpf= cpf;
    } else {
        std::string error = "CPF's manager must have 11 characters and have just numbers.";
        return error;
    }

    if(teamA!="") {
        this->teamA= teamA;
    } else {
        std::string error = "Please insert the name of the first team.";
        return error;
    }

    if(teamB!="") {
        this->teamB= teamB;
    } else {
        std::string error = "Please insert the name of the second team.";
        return error;
    }

    if(ticketPrice>=0.0) {
        this->ticketPrice= ticketPrice;
    } else {
        std::string error = "The ticket price must be greater than 0.";
        return error;
    }

    if(quantityOfTickets>0) {
        this->quantityOfTickets = quantityOfTickets;
    } else {
        std::string error = "The number of tickets should be greater than 0.";
        return error;
    }

    this->description = description;
*/
	return 0;
}

std::string ManageMatch ::updateMatch(int matchID, int parameter, std::string value)
{
	/*if() {

	} else {
        return "";
	}

    // TO DO: do a select in the database to get the customers that made a purchase
    // Input: MatchID
    // Output: customer[] */

	return 0;
}

void ManageMatch ::removeMatch(int matchID)
{
}
