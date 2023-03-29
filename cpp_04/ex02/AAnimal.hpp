#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal& copied);
        AAnimal& operator=(const AAnimal& rval);
        virtual ~AAnimal();

        std::string getType() const;

        virtual void makeSound() const = 0;
};

#endif