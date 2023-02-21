#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap A("A");
    ScavTrap B("B");
    FragTrap C("C");

    A.attack("B");
    B.takeDamage(A.getAd());
    B.attack("A");
    A.takeDamage(B.getAd());
    A.attack("C");
    C.highFivesGuys();
    C.attack("B");
    B.takeDamage(C.getAd());
    std::cout << B.getHp() << std::endl;
    B.setEnergy(0);
    B.attack("A");
}