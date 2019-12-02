#ifndef SAMPLE_CODES_VECTOR_IMPL_H
#define SAMPLE_CODES_VECTOR_IMPL_H

#include "vector.h"
#include <cassert>

template <class T>
void Vector<T>::grow() {
    capacity *= 2;
    T** temp = new T*[capacity];
    for(int i = 0; i < length; i++) {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;
}

template <class T>
Vector<T>::Vector() {
    capacity = 1;
    length = 0;
    data = new T*;
}

template <class T>
Vector<T>::Vector(const T& elt) {
    capacity = 1;
    length = 0;
    data = new T*(new T(elt));
}

template <class T>
Vector<T>::~Vector() {
    for(int i = 0; i < length; i++) {
        delete(data[i]);
    }
    delete data;
}

template <class T>
void Vector<T>::insert(int pos, T &elt) {
    assert(pos <= length);
    if(length == capacity) grow();
    for(int i = length; i > pos; i--) {
        data[i] = data[i - 1];
    }
    length++;
    data[pos] = new T(elt);
}

template <class T>
T Vector<T>::pop(int pos) {
    assert(pos < length);
    T ret = *data[pos];
    delete data[pos];
    for(int i = pos; i < length; i++) {
        data[pos] = data[pos + 1];
    }
    length--;
    return ret;
}

template <class T>
T& Vector<T>::operator[](int index) {
    assert(index < length);
    return *data[index];
}

template <class T>
const T& Vector<T>::operator[](int index) const {
    assert(index < length);
    return *data[index];
}

#endif //SAMPLE_CODES_VECTOR_IMPL_H
