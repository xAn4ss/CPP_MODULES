#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zombie;
    zombie.setZombieName(name);
    zombie.announce();
}