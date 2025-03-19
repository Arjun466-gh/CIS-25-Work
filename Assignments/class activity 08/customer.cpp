#include <iostream>
#include "customer.hpp"
using namespace std;

// Definition of displayInfo() function
void Customer::displayInfo() {
    cout << "\n--- Customer Information ---" << endl;
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;
    cout << "Address: " << address.street << ", " << address.city << ", " << address.zipCode << endl;
}
