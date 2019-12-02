#include "vector.h"
#include "myString.h"
#include <iostream>

using namespace std;

int main() {
    Vector<int> vec;
    myString command;
    cin >> command;
    while(command != "exit") {
        if(command == "insert") {
            int index, elt;
            cin >> index >> elt;
            vec.insert(index, elt);
        } else if(command == "pop") {
            int index;
            cin >> index;
            cout << vec.pop(index) << endl;
        } else if(command == "show") {
            int index;
            cin >> index;
            cout << vec[index] << endl;
        }
        cin >> command;
    }
}