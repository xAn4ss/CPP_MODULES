#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice constructed" << std::endl;
}

Ice::Ice(const Ice& copied) : AMateria("ice")
{
    *this = copied;
}

Ice& Ice::operator=(const Ice& rval)
{
    (void)rval;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice deconstructed" << std::endl;
}

Ice*  Ice::clone() {
    return (new Ice(*this));
}