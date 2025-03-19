#include <iostream>
#include "customer.hpp"
using namespace std;

int main() {
    Customer c;

    // Collecting user input for customer
    cout << "Enter Customer ID: ";
    cin >> c.id;

    cin.ignore(); // Clear newline for getline
    cout << "Enter Customer Name: ";
    getline(cin, c.name);

    cout << "Enter Customer Email: ";
    getline(cin, c.email);

    // Address input
    cout << "Enter Street: ";
    getline(cin, c.address.street);

    cout << "Enter City: ";
    getline(cin, c.address.city);

    cout << "Enter Zip Code: ";
    cin >> c.address.zipCode;

    return 0;
}
