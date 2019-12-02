#ifndef SAMPLE_CODES_VECTOR_H
#define SAMPLE_CODES_VECTOR_H

template <class T>
class Vector {
    T** data;
    int length, capacity;
    void grow();
public:
    Vector();
    Vector(const T& elt);

    ~Vector();

    inline int size() { return length; }

    void insert(int pos, T& elt);
    T pop(int pos);

    T& operator[](int index);
    const T& operator[](int index) const;
};

#include "vector_impl.h"

#endif //SAMPLE_CODES_VECTOR_H
