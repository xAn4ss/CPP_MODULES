#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& copied);
        Dog& operator=(const Dog& rval);
        ~Dog();

        void makeSound() const;
};

#endif