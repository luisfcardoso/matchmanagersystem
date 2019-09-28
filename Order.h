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

	int boughtTickets[];


public:
	int purchase(Customer customer, int matchID, int quantityTickets);
	bool checkTicketAvailability(int matchID);

};
#endif
