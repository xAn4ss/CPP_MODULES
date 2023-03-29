#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
    delete this->brain;
}

Cat::Cat(const Cat& copied) : Animal(copied)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copied;
}

Cat& Cat::operator=(const Cat& rval)
{    
    if (this != &rval)
    {
        this->_type = rval.getType();
        this->brain = new Brain(*rval.brain);
    }

    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaaaaaaw"<< std::endl;
}

std::string& Cat::getIdea(int i)
{
    return (this->brain->get(i));
}

void Cat::setIdea(int i, std::string idea)
{
    this->brain->set(i, idea);

}