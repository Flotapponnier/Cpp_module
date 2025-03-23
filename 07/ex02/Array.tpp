#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : arr(nullptr), size_(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : size_(n) {
    arr = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T>& other) : size_(other.size_) {
    arr = new T[size_];
    for (unsigned int i = 0; i < size_; ++i) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this != &other) {
        delete[] arr;
        size_ = other.size_;
        arr = new T[size_];
        for (unsigned int i = 0; i < size_; ++i) {
            arr[i] = other.arr[i];
        }
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= size_) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= size_) {
        throw std::out_of_range("Index out of bounds");
    }
    return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return size_;
}

template <typename T>
Array<T>::~Array() {
    delete[] arr;
}

#endif
