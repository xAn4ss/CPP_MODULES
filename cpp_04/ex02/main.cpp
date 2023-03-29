#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // AAnimal a("azeaze");

    const AAnimal* animal[4] = {
        new Cat(), new Dog(), new Cat(), new Dog()
    };

    for (int i= 0; i < 4; i++)
    {
        animal[i]->makeSound();
    }

    for(int i = 0; i < 4; i++)
        delete animal[i];
}
