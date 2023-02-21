#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void setZombieName(std::string s);
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif