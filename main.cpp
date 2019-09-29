#include <string>
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "Customer.h"

using namespace std;

int main()
{
    Customer customer1("1548555542","654648765","514","654","04","25");

    //cout << customer1.registerUser() <<endl;
    //cout << customer1.removeUser() << endl;
    cout << customer1.authenticate() << endl;

    return 0;
}
