#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){};


Base* generate(void)
{
    srand(time(NULL));
    int c = rand() % 3;
    if (c == 0)
    {
        A *a = new A();
        return (dynamic_cast<Base*>(a));
    }    
    else if (c == 1)
    {
        B *b = new B();
        return (dynamic_cast<Base*>(b));
    }    
    else
    {
        C *c = new C();
        return (dynamic_cast<Base*>(c));
    }
    
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
    {
        std::cout << "A" << std::endl;
        return;
    }
    else if (dynamic_cast<B*>(p) != NULL)
    {
        std::cout << "B" << std::endl;
        return;
    }
    else if (dynamic_cast<C*>(p) != NULL)
    {
        std::cout << "C" << std::endl;
        return;
    }
    return ;
}

void identify(Base& p)
{
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }catch (std::bad_cast &e){}
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }catch (std::bad_cast &e){}
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }catch (std::bad_cast &e){}
}