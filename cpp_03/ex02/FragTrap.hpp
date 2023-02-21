#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& copied);
    FragTrap& operator=(const FragTrap& rval);
    ~FragTrap();

    void highFivesGuys(void);
};

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hp = 100;
    this->_energy = 100;
    this->_ad = 30;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor with a param called" << std::endl;
    this->_hp = 100;
    this->_energy = 100;
    this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap& copied) : ClapTrap(copied)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& rval)
{
    std::cout << "FragTrap called copy assign operator" << std::endl;
    if (this != &rval)
    {
        this->_name = rval._name;
        this->_ad = rval._ad;
        this->_hp = rval._hp;
        this->_energy = rval._energy;
    }
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap "<<this->_name<<" HIGH FIVE GUYS!!"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap "<<this->_name<<" deconstructed" << std::endl;
}


#endif 