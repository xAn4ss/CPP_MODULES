#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>
#include <deque>
#include <iterator>

template <class T, class Container = std::deque<T> >
    class MutantStack : public std::stack<T> {

        public: 
            typedef typename std::stack<T, Container>::container_type::iterator iterator;

            MutantStack();

            MutantStack(const MutantStack& copied);

            MutantStack& operator=(const MutantStack& rval);

            ~MutantStack();

            iterator begin();

            iterator end();
};


template <class T, class Cont > MutantStack<T, Cont>::MutantStack()
{
    std::cout << "Constructed" << std::endl;
};

template <class T, class Cont > MutantStack<T, Cont>::~MutantStack()
{
    // std::cout << "Destructed" << std::endl;
};

template <class T, class Cont> MutantStack<T, Cont>::MutantStack(const MutantStack& copied)
    : std::stack<T>(copied.c){
        std::cout << "Copy constructor called" << std::endl;
        *this = copied;
};

template <class T, class Cont> MutantStack<T, Cont>& MutantStack<T, Cont>::operator=(const MutantStack& rval)
{
    std::cout << "Copy assign operator" << std::endl;
    if (this != &rval){
        this->c = rval.c;
    }
    return *this;
};

template<class T, class Cont> typename MutantStack<T, Cont>::iterator MutantStack<T, Cont>::begin()
{
    return std::stack<T>::c.begin();
};

template<class T, class Cont> typename MutantStack<T, Cont>::iterator MutantStack<T, Cont>::end()
{
    return std::stack<T>::c.end();
}


#endif