#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Ticket.h"
#include "Customer.h"

class Order
{
private:
	int orderID;

	Ticket boughtTickets[];


public:
	Ticket purchase(Customer customer, int matchID, int quantityTickets);

};
#endif
