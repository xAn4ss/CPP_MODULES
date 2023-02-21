#include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string s, Weapon &weapon) : _name(s) , _weapon(weapon)
{}

void HumanA::attack()
{
    if (this->_weapon.getType() == "")
        std::cout << this->_name << " can't attack" << this->_weapon.getType() << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
