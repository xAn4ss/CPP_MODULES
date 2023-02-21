#include "Weapon.hpp"

Weapon::Weapon(std::string name): _type(name)
{
    
}

Weapon::~Weapon()
{

}

const std::string &Weapon::getType()
{
    return (this->_type);
}

void Weapon::setType(std::string s)
{
    this->_type = s; 
}
