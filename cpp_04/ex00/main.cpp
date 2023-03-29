#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    {   
        const Animal* animal = new Animal();
        const Animal* cat = new Cat();
        const Animal* dog = new Dog();

        std::cout << cat->getType() << std::endl;
        std::cout << dog->getType() << std::endl;

        cat->makeSound();
        dog->makeSound();
        animal->makeSound();

        delete animal;
        delete cat;
        delete dog;
    }
    std::cout << "-*-*-*-*-*-*-*-*-" << std::endl;
    {
        const WrongAnimal* cat = new WrongCat();

        cat->makeSound();

        delete cat;
    }

}