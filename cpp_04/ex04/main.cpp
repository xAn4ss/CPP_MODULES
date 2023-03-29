#include "MateriaSource.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(){
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout<<std::endl;
    ICharacter* bob = new Character("bob");
    std::cout<<std::endl;

    me->use(0, *bob);
    me->use(1, *bob);

    delete bob;
    std::cout<<std::endl;
    delete me;
    std::cout<<std::endl;
    delete src;
    return 0;
}