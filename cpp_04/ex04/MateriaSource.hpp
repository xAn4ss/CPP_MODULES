#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
        AMateria *materia[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource& copied);
        MateriaSource& operator=(const MateriaSource& rval);
        void learnMateria(AMateria*);
        AMateria* createMateria(const std::string& type);
};

#endif