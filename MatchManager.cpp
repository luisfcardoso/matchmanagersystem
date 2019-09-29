#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "MatchManager.h"

class MatchManager : public Customer
{
    public:
        MatchManager(std::string cpf);

        std::string registerMatchManager();

        bool checkIfItIsAManager();
};
