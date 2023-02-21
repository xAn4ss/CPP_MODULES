#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
    std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName(std::string s)
{
    this->_name = s;
}
