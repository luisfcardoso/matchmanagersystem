#include <string>
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <sstream>

#include "Customer.h"

using namespace std;

int main()
{
    try {
        Customer customer1("15485555401","123456789123456");
        //cout << customer1.registerUser() <<endl;
        //cout << customer1.removeUser() << endl;
        cout << customer1.authenticate() << endl;
    } catch (string e) {
        cout << e << endl;
    }

    return 0;
}
