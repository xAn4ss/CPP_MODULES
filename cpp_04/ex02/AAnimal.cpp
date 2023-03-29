#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
    std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << "AAnimal " << this->getType() << " constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal deconstructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copied){
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = copied;
}

AAnimal& AAnimal::operator=(const AAnimal& rval)
{
    std::cout << "AAnimal copy assignement operator called" << std::endl;
    if (this != &rval)
    {
        this->_type = rval.getType();
    }
    return (*this);
}

std::string AAnimal::getType() const 
{
    return (this->_type);
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal sound" << std::endl;
}