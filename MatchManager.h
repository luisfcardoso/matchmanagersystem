#ifndef MATCH_MANAGER_H
#define MATCH_MANAGER_H

#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "Customer.h"

class MatchManager : public Customer
{
    public:
        MatchManager(std::string cpf);

        std::string registerMatchManager();

        bool checkIfItIsAManager();

};
#endif
