#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string     _name;
        unsigned int    _hp;
        unsigned int    _energy;
        unsigned int    _ad;
    public:
        ClapTrap();
        ClapTrap(std::string s);
        ~ClapTrap();
        ClapTrap(const ClapTrap& copied);
        ClapTrap& operator=(const ClapTrap& rval);

        std::string getName()const;
        unsigned int getHp()const;
        unsigned int getEnergy()const;
        unsigned int getAd()const;

        void setName(std::string name);
        void setHp(unsigned int hp);
        void setEnergy(unsigned int energy);
        void setAd(unsigned int ad);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif