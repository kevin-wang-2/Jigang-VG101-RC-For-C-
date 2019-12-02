#include "shape.h"
#include "myString.h"
#include <iostream>

using namespace std;

int main() {
    Shape *instance;
    myString command;
    int w, h;
    cin >> command >> w >> h;
    if(command == "triangle") {
        instance = new Triangle(w, h);
    } else {
        instance = new Rectangle(w, h);
    }
    cout << instance->area();
    delete instance;
    return 0;
}