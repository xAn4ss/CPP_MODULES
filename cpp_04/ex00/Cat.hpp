#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& copied);
        Cat& operator=(const Cat& rval);

        void makeSound() const;
};

#endif