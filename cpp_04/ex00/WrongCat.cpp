#include "WrongCat.hpp"

#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copied) : WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;

    *this = copied;
}

WrongCat& WrongCat::operator=(const WrongCat& rval)
{    
    std::cout << "WrongCat copy assignement operator called" << std::endl;

    if (this != &rval)
        this->_type = rval.getType();

    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Miaaaaaaw"<< std::endl;
}