#ifndef LIBRARY_CUSTOMER_H
#define LIBRARY_CUSTOMER_H

#include <string>
#include <utility>

using namespace std;

class Customer {
    string name;
public:
    Customer(string _name) : name(std::move(_name)) {};
    Customer() {};

    inline string getName() const { return name; };
};

#endif //LIBRARY_CUSTOMER_H
