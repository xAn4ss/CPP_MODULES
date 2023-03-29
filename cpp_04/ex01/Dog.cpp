#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
    delete this->brain;    
}

Dog::Dog(const Dog& copied) : Animal(copied)
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