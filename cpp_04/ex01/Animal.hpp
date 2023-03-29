#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal& copied);
        Animal& operator=(const Animal& rval);
        virtual ~Animal();

        std::string getType() const;

        virtual void makeSound() const;
};

#endif