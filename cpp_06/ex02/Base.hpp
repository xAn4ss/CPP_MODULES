#ifndef BASE_HPP
#define BASE_HPP

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

class Base
{
    public:
        virtual ~Base();
};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);


#endif