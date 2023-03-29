#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
}

Dog::Dog(const Dog& copied) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;

    *this = copied;
}

Dog& Dog::operator=(const Dog& rval)
{
    std::cout << "Dog copy assignement operator called" << std::endl;

    if (this != &rval)
        this->_type = rval.getType();

    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "ouaf ouaf" << std::endl;
}