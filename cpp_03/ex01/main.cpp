#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap A("A");
    ScavTrap B("B");

    B.attack("A");
    A.takeDamage(B.getAd());

    B.guardGate();
    B.guardGate();

}