#ifndef LIBRARY_BOOK_H
#define LIBRARY_BOOK_H

#include <string>
#include "customer.h"

using namespace std;

class Book {
    string ID, name;
    Customer *borrower = nullptr;
public:
    Book(string ID, string name);
    Book() {};

    inline string getID() { return ID; }
    inline string getName() { return name; }
    inline Customer *getBorrower() { return borrower; }

    void borrow(Customer * customer);
    void returnBook();
    void print();
};

#endif //LIBRARY_BOOK_H
