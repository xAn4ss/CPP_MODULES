#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Animal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copied){
    std::cout << "WrongAnimal copy constructor called" << std::endl;

    *this = copied;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rval)
{
    std::cout << "WrongAnimal copy assignement operator called" << std::endl;
    if (this != &rval)
    {
        this->_type = rval.getType();
    }
    return (*this);
}

std::string WrongAnimal::getType() const 
{
    return (this->_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}