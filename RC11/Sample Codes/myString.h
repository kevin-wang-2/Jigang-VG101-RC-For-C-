#ifndef SAMPLE_CODES_MYSTRING_H
#define SAMPLE_CODES_MYSTRING_H

#include <iostream>

class myString {
    char *data = nullptr;
    int length = 0;
public:
    myString();
    myString(const char* origin);
    myString(char origin);
    myString(const myString& str);
    myString(const myString&& str) noexcept;

    ~myString();

    [[nodiscard]] inline int size() const { return length; }

    myString operator+(const myString& another);
    myString& operator+=(const myString& another);
    bool operator==(const myString& another);
    bool operator!=(const myString& another);
    char &operator[](int index);
    const char& operator[](int index) const;
    myString& operator=(const myString& another);

    friend std::ostream& operator<<(std::ostream& os, const myString& str);
    friend std::istream& operator>>(std::istream& is, myString& str);
};

#endif //SAMPLE_CODES_MYSTRING_H
