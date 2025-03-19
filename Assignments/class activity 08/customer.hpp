#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
#include "address.hpp"
using namespace std;

// Customer structure with nested Address
struct Customer {
    int id;
    string name;
    string email;
    Address address;

    void displayInfo(); // Declaration
};

#endif
