#include <iostream>
#include "library.h"

int main() {
    Library lib;
    string command;
    cin >> command;
    while(command != "exit") {
        if(command == "addBook") {
            string ID, name;
            cin >> ID >> name;
            lib.addBook(ID, name);
        } else if(command == "addCustomer") {
            string name;
            cin >> name;
            lib.addCustomer(name);
        } else if(command == "checkb1") {
            string ID;
            cin >> ID;
            lib.checkb1(ID);
        } else if(command == "checkb2") {
            string name;
            cin >> name;
            lib.checkb2(name);
        } else if(command == "checkc") {
            string name;
            cin >> name;
            lib.checkc(name);
        } else if(command == "borrow") {
            string customerName, bookName;
            cin >> customerName >> bookName;
            lib.borrow(customerName, bookName);
        } else if(command == "return") {
            string bookName;
            cin >> bookName;
            lib.returnBook(bookName);
        } else {
            cout << "Unknown command!" << endl;
        }
        cin >> command;
    }
    return 0;
}