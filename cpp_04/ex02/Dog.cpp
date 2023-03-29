#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
    delete this->brain;    
}

Dog::Dog(const Dog& copied) : AAnimal(copied)
{
    *this = copied;
}

Dog& Dog::operator=(const Dog& rval)
{
    std::cout << "Dog copy assignemet operator called" << std::endl;
    if (this != &rval)
    {
        this->_type = rval.getType();
        this->brain = new Brain(*rval.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "ouaf ouaf" << std::endl;
}