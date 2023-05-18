#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <algorithm>
#include <iostream>
#include <iterator>

template <typename TT> typename TT::iterator easyfind(TT& cont, int num)
{
    typename TT::iterator it = std::find(cont.begin(), cont.end(), num);
    if (it != cont.end())
        return it;
    else
        throw std::exception();
}

#endif