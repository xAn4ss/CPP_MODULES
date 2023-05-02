#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void iter(T *arr, int lenght, void (*f)(T &))
{
    for (int i = 0; i < lenght; i++)
    {
        f(arr[i]);
    }
}

#endif