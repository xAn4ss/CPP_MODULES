#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(const std::string& type);
        AMateria(const AMateria& copied);
        AMateria& operator=(const AMateria& rval);
        virtual ~AMateria();

        const std::string& getType() const;
        virtual AMateria* clone() = 0;
        virtual void use(ICharacter& target);
};

#endif