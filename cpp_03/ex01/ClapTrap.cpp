#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("random"), _hp(10), _energy(10), _ad(0)
{
    std::cout << " ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string s) : _name(s), _hp(10), _energy(10), _ad(0)
{
    std::cout << "ClapTrap constructor with a param is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<<this->_name<<" deconstructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copied)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copied;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rval)
{
    if (this != &rval)
    {
        this->_name = rval._name;
        this->_hp = rval._hp;
        this->_energy = rval._energy;
        this->_ad = rval._ad;
    }
    return (*this);
}

std::string ClapTrap::getName()const
{
    return (this->_name);
}

int ClapTrap::getHp()const
{
    return (this->_hp);
}

int ClapTrap::getEnergy()const{
    return (this->_energy);
}

int ClapTrap::getAd()const{
    return (this->_ad);
}

void ClapTrap::setName(std::string name){
    this->_name = name;
}

void ClapTrap::setHp(unsigned int hp){
    this->_hp = hp;
}

void ClapTrap::setEnergy(unsigned int energy){
    this->_energy = energy;
}

void ClapTrap::setAd(unsigned int ad){
    this->_ad = ad;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hp > 0 && this->_energy > 0)
    {
        this->_energy--;
        std::cout << "ClapTrap "<< this->_name << " attacks " <<
        target << ", causing " << this->_ad << " points of damage!" 
        << std::endl;
    }
    else if (this->_hp <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hp > 0)
    {
        this->_hp -= amount;
        std::cout << "ClapTrap " << this->_name << " took "
        << amount << " damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hp > 0 && this->_energy > 0)
    {
        this->_energy--;
        this->_hp += amount;
        std::cout << "ClapTrap " << this->_name << " repaired for "
        << amount << "hp" << std::endl;
    }
    else if (this->_hp <= 0)
        std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
    else if (this->_energy <= 0)
        std::cout << "ClapTrap " << this->_name << " doesn't have enough energy" << std::endl;

}