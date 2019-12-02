#include "myString.h"
#include <cassert>
#include <cstring>

inline int max(int a, int b) { return a>b?a:b; }

static void nCopy(char* strto, const char* strfrom, int n) {
    for (int i = 0; i < n; i++) {
        strto[i] = strfrom[i];
    }
}

myString::myString() {
    data = new char;
}

myString::myString(const char *origin) {
    length = strlen(origin);
    delete data;
    data = new char[length];
    nCopy(data, origin, length);
}

myString::myString(char origin) {
    length = 1;
    data = new char;
    data[0] = origin;
}

myString::myString(const myString &str) {
    length = str.length;
    delete data;
    data = new char[length];
    nCopy(data, str.data, length);
}

myString::myString(const myString &&str) noexcept {
    length = str.length;
    delete data;
    data = new char[length];
    nCopy(data, str.data, length);
}

myString::~myString() {
    delete  data;
}

myString myString::operator+(const myString &another) {
    myString ret;

    ret.length = length + another.length;
    ret.data = new char[ret.length];
    nCopy(ret.data , data, length);
    nCopy(ret.data  + length, another.data, another.length);
    return ret;
}

myString& myString::operator+=(const myString &another) {
    char* temp = new char[length + another.length];
    nCopy(temp, data, length);
    nCopy(temp + length, another.data, another.length);
    delete data;
    data = temp;
    length = length + another.length;
    return *this;
}

bool myString::operator==(const myString &another) {
    if(length != another.length) return false;
    for(int i = 0; i < length; i++) {
        if(data[i] != another[i]) return false;
    }
    return true;
}

bool myString::operator!=(const myString &another) {
    if(length != another.length) return true;
    for(int i = 0; i < length; i++) {
        if(data[i] != another[i]) return true;
    }
    return false;
}

myString& myString::operator=(const myString &another) {
    length = another.length;
    delete data;
    data = new char[length];
    nCopy(data, another.data, length);
    return *this;
}

char& myString::operator[](int index) {
    assert(index < length && index > 0);
    return data[index];
}

const char& myString::operator[](int index) const {
    assert((index < length) && (index >= 0));
    return data[index];
}

std::ostream& operator<<(std::ostream& os, const myString& str) {
    for(int i = 0; i < str.length; i++) os << str[i];
    return os;
}
std::istream& operator>>(std::istream& is, myString& str) {
    char c;
    str.length = 0;
    is.get(c);
    while(c != '\n' && c != ' ') {
        str += myString(c);
        is.get(c);
    }
    return is;
}