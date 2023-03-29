#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure constructed" << std::endl;
}

Cure::Cure(const Cure& copied) : AMateria("cure")
{
    *this = copied;
}

Cure& Cure::operator=(const Cure& rval)
{
    (void)rval;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destroyed" << std::endl;
}


Cure* Cure::clone()
{
    return (new Cure(*this));
}
