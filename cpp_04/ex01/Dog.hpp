#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    protected:
        Brain *brain;
    public:
        Dog();
        Dog(const Dog& copied);
        Dog& operator=(const Dog& rval);
        ~Dog();

        void makeSound() const;
};

#endif