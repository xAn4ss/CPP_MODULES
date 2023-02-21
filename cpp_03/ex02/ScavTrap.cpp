#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_ad = 20;
    this->_guardGateState = 0;
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
    std::cout << "ScavTrap constructor with param called" << std::endl;
    this->_hp = 100;
    this->_energy = 50;
    this->_ad = 20;
    this->_guardGateState = 0;
}

ScavTrap::ScavTrap(const ScavTrap& copied) : ClapTrap(copied)
{
    std::cout << "copy constructor called" << std::endl;
    this->_guardGateState = copied._guardGateState;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rval)
{
    std::cout << "copy assign" << std::endl;
    if (this != &rval)
    {
        this->_name = rval._name;
        this->_hp = rval._hp;
        this->_energy = rval._energy;
        this->_ad = rval._ad;
        this->_guardGateState = rval._guardGateState;        
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name<< " deconstructed" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hp > 0 && this->_energy > 0)
    {
        this->_energy--;
        std::cout << "ScavTrap "<< this->_name << " attacks " <<
        target << ", causing " << this->_ad << " points of damage!" 
        << std::endl;
    }
    else if (this->_hp == 0)
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    else if (this->_energy == 0)
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy" << std::endl;
}

void ScavTrap::guardGate()
{
    if (this->_guardGateState)
        std::cout << "ScavTrap "<<this->_name<<" is already in gate keeper mode" << std::endl;
    else
    {
        this->_guardGateState = 1;
        std::cout << "ScavTrap "<<this->_name<<" is in gate keeper mode" << std::endl;

    }
}