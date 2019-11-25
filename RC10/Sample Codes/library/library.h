#ifndef LIBRARY_LIBRARY_H
#define LIBRARY_LIBRARY_H

#include "book.h"
#include "customer.h"

class Library {
    Book bookShelf[255];
    Customer customerList[255];
    int bookNum = 0, customerNum = 0;
public:
    void addBook(string ID, string name);
    void addCustomer(const string &name);
    void checkb1(const string& ID);
    void checkb2(const string& name);
    void checkc(const string& name);
    void borrow(const string &customerName, const string &bookName);
    void returnBook(const string &bookName);

    Library();
};

#endif //LIBRARY_LIBRARY_H
