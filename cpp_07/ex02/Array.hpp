#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<class T> class Array
{
    private:
        unsigned int _size;
        T arr[];
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &copied);
        Array & operator=(const Array& rval);
        T& operator[](int);
        ~Array();

        unsigned int size();
};

template <class T> T& Array<T>::operator[](int index)
{
    if (index >= _size)
        throw std::exception();
    return arr[index];
};

template <class T> unsigned int Array<T>::size(){
    return (_size);
}

template <class T> Array<T>::Array()
{
    _size = 0;
    arr = NULL;
};

template <class T> Array<T>::Array(unsigned int n)
{
    _size = n;
    arr = new T(_size);
    for (unsigned int i = 0; i < _size; i++)
        arr[i] = 0;
    
};

template <class T> Array<T>::Array(const Array &copied)
{
    *this = copied;
};

template <class T> Array<T>& Array<T>::operator=(const Array<T>& rval)
{

    if (this != &rval)
    {
        delete [] arr;
        this->arr = new T(_size);
        for(unsigned int i = 0; i < _size; i++)
            arr[i] = rval.arr[i];
    }
    return *this;
};

template <class T> Array<T>::~Array()
{
    delete[] arr;
};

#endif