#include "library.h"

#include <utility>
#include <iostream>

void Library::addBook(string ID, string name) {
    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getID() == ID) {
            cout << "Book ID already exists." << endl;
        }
    }
    bookShelf[bookNum++] = {move(ID), move(name)};
}

void Library::addCustomer(const string& name) {
    customerList[customerNum++] = {name};
}

void Library::checkb1(const string& ID) {
    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getID() == ID) {
            bookShelf[i].print();
        }
    }
}

void Library::checkb2(const string &name) {
    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getName() == name) {
            bookShelf[i].print();
        }
    }
}

void Library::checkc(const string &name) {
    Customer *target;
    for(int i=0;i<customerNum;i++) {
        if(customerList[i].getName() == name) {
            target = customerList + i;
        }
    }

    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getBorrower() == target) {
            bookShelf[i].print();
        }
    }
}

void Library::borrow(const string &customerName, const string &bookName) {
    Customer *target = nullptr;

    for(int i=0;i<customerNum;i++) {
        if(customerList[i].getName() == customerName) {
            target = customerList + i;
        }
    }

    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getName() == bookName) {
            bookShelf[i].borrow(target);
        }
    }

}

void Library::returnBook(const string &bookName) {
    for(int i=0;i<bookNum;i++) {
        if(bookShelf[i].getName() == bookName) {
            bookShelf[i].returnBook();
        }
    }
}

Library::Library() {

}
