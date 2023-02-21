#include "Zombie.hpp"

int main()
{
    std::string name;
    std::cout << "Enter zombie name" << std::endl << ">";
    std::cin >> name;
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;

    std::cout << "Enter zombie name" << std::endl << ">";
    std::cin >> name;
    randomChump(name);
}