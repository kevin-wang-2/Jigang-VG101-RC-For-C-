#include "book.h"

#include <utility>
#include <iostream>

Book::Book(string ID, string name) {
    this->ID = move(ID);
    this->name = move(name);
}

void Book::borrow(Customer *customer) {
    borrower = customer;
}

void Book::returnBook() {
    borrower = nullptr;
}

void Book::print() {
    cout << ID
         << " "
         << name
         << " "
         << ((borrower == nullptr) ? "on shelf" : "borrowed")
         << endl;
}