#ifndef MATCH_SALES_H
#define MATCH_SALES_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Match.h"
#include "Order.h"
#include "Customer.h"

class MatchSales
{
private:
	Match matchID;

	Order orders[];

	Customer customers;


public:
	string checkSalesCustomers(int matchID);

	int checkSalesQuantity(int matchID);

};
#endif
