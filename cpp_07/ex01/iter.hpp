#ifndef ITER_HPP
#define ITER_HPP

template <class T> void iter(T* addy, int length, void fct(T element)){
    for (int i = 0; i < lenght; i++)
    {
        fct(addy[i]);
    }
}

#endif