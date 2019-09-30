#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Match.h"


Match::Match(int hour, int minute, int day, int month, int year, float ticketPrice, std::string stadiumName, std::string city, std::string state, std::string ownerCPF, std::string teamA, std::string teamB, int quantityOfSales, std::string description) {

    if(hour<24) {
        this->hour= hour;
    } else {
        std::string error = "Hour must have 2 characters, have just numbers and be less than 24.";
        throw error;
    }

    if(minute<60) {
        this->minute= minute;
    } else {
        std::string error = "Minute must have 2 characters, have just numbers and be less than 60.";
        throw error;
    }

    if(day<32) {
        this->day= day;
    } else {
        std::string error = "Day must have 2 characters, have just numbers and be less than 32.";
        throw error;
    }

    if(month<13) {
        this->month= month;
    } else {
        std::string error = "Month must have 2 characstadiumNameters, have just numbers and be less than 12.";
        throw error;
    }

    if((year>2018) && (year<2050)) {
        this->year= year;
    } else {
        std::string error = "Year must have 4 characters, have just numbers and be between 2019 and 2050.";
        throw error;
    }

    if(ticketPrice>=0.0) {
        this->ticketPrice= ticketPrice;
    } else {
        std::string error = "The ticket price must be greater than 0.";
        throw error;
    }

    if(stadiumName!="") {
        this->stadiumName= stadiumName;
    } else {
        std::string error = "Please insert the stadium name.";
        throw error;
    }
}

int Match::searchMatch(int beginDay, int beginMonth, int beginYear, int endDay, int endMonth, int endYear, int endDate, std::string city, std::string state)
{
	return 0;
}
