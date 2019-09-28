#include <string>
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "Customer.h"

using namespace std;

int main()
{
    Customer customer1("15485555412","654648765","514","654","04","25");

    cout << customer1.registerUser() <<endl;

    return 0;
}
