#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor called" << std::endl;
}

Brain::Brain(const Brain& copied)
{
    *this = copied;
}

Brain& Brain::operator=(const Brain& rval)
{
    std::cout<< "Brain copy assignement operator called" << std::endl;
    if (this != &rval)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i] = rval._ideas[i];
        }
    }
    return (*this);
}

std::string& Brain::get(int i)
{
    return (this->_ideas[i]);
}

void Brain::set(int i, std::string idea)
{
    std::cout << "-*-*-*" << idea << "*-*-*-" << std::endl;
    this->_ideas[i] = idea;
}
