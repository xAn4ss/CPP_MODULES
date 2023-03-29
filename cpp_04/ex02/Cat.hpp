#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    protected:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& copied);
        Cat& operator=(const Cat& rval);

        void makeSound() const;

        void setIdea(int i, std::string idea);
        std::string& getIdea(int i);
};


#endif