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
            typedef iterator std::stack<T>::container_type::iterator;
            MutantStack(): std::stack<T>(){
            };

            MutantStack(const MutantStack& copied): std::stack<T>(copied._stack){

            };

            MutantStack& operator=(const MutantStack& rval){
                if (this != &rval){

                    this->operator=(rval);
                }
                return *this;
            };

            ~MutantStack()
            {
                std::cout << "Deconstructed" << std::endl;
            };

            typename std::stack<T>::container_type::iterator begin(){
                return std::stack<T>::c.begin();
            };

            typename std::stack<T>::container_type::iterator end(){
                return std::stack<T>::c.end();
            }

};




#endif