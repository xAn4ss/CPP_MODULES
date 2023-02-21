#ifndef HUMAN_B_CPP
#define HUMAN_B_CPP

#include "Weapon.hpp"

class HumanB
{
private:
    std::string _n;
    Weapon *_weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &w);
    void attack();
};




#endif