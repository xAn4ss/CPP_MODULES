#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string name);
    ~Weapon();
    const std::string& getType();
    void setType(std::string s);

};

#endif