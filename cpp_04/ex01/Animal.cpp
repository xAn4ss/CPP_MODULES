#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}

Animal::Animal(const Animal& copied){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copied;
}

Animal& Animal::operator=(const Animal& rval)
{
    std::cout << "Animal copy assignement operator called" << std::endl;
    if (this != &rval)
    {
        this->_type = rval.getType();
    }
    return (*this);
}

std::string Animal::getType() const 
{
    return (this->_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}