#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>
#include <iterator>

template <class T, class Container = std::deque<T> >
    class MutantStack : public std::stack<T> {

        public: 
            typedef typename std::stack<T, Container>::container_type::iterator iterator;
            MutantStack(): std::stack<T>(){
                std::cout << "Constructed" << std::endl;
            };

            MutantStack(const MutantStack& copied): std::stack<T>(copied.c){
                std::cout << "Copy constructor called" << std::endl;
            };

            MutantStack& operator=(const MutantStack& rval){
                std::cout << "Copy assign operator" << std::endl;
                if (this != &rval){

                    this->c = rval.c;
                }
                return *this;
            };

            ~MutantStack()
            {
                std::cout << "Destructed" << std::endl;
            };

            iterator begin(){
                return std::stack<T>::c.begin();
            };

            iterator end(){
                return std::stack<T>::c.end();
            }
};




#endif