#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _n(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &w)
{
    this->_weapon = &w;
}

void HumanB::attack()
{
    if (this->_weapon == NULL || this->_weapon->getType() == "")
        std::cout << this->_n << " can't attack" << std::endl;
    else
        std::cout << this->_n << " attacks with their " << this->_weapon->getType() << std::endl;
}