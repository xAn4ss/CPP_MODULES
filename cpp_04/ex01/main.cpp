#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongCat.hpp"

int main()
{
    {
        const Animal *animal[6];
        for (int i = 0; i < 6; i++)
        {
            if (i%2)
            {
                animal[i] = new Dog();
            }
            else
                animal[i] = new Cat();
        }
        for (int i = 0; i < 6; i++)
        {
            animal[i]->makeSound();
        }
        for(int i = 0; i < 6; i++)
        {
            delete animal[i];
        }
    }
    // {
    //     Dog basic;
    //     {
    //         Dog tmp = basic;
    //     }
    // }
}