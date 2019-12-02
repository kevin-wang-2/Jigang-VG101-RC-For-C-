#include "myString.h"
#include <iostream>

int main() {
    myString str;
    std::cin >> str;
    std::cout << str + myString('4') << std::endl;
    return 0;
}