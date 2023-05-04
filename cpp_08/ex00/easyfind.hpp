#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>

template <class TT> int easyfind(const TT& cont, const int& num)
{
    std::iterator it;
    it = std::find(cont.begin(), cont.end(), num);
    if (it != cont.end())
        return std::distance(cont.begin(), it);
    else
        throw std::exception();
}

#endif