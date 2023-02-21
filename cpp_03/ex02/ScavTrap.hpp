#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{
private:
    bool    _guardGateState;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& copied);
    ScavTrap& operator=(const ScavTrap& rval);

    void attack(const std::string& target);
    void guardGate();
};



#endif 