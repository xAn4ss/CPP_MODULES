#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    protected:
        std::string _name;
        AMateria* material[4];
    public:
        Character(std::string const &name);
        ~Character();
        Character(const Character& copied);
        Character& operator=(const Character& rval);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif