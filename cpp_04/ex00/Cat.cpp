#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
}

Cat::Cat(const Cat& copied) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;

    *this = copied;
}

Cat& Cat::operator=(const Cat& rval)
{    
    std::cout << "Cat copy assignement operator called" << std::endl;

    if (this != &rval)
        this->_type = rval.getType();

    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaaaw"<< std::endl;
}