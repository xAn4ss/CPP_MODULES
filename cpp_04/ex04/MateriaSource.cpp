#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout<<"Materia constructor called." << std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout<< "Materia deconstructed." << std::endl;
    for (int i = 0; i < 4;i++)
    {
        if (this->materia[i])
            delete this->materia[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& copied)
{
    *this = copied;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rval){
    if (this != &rval){
        for (int i = 0; i < 4; i++)
        {
            this->materia[i] = rval.materia[i];
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* learn)
{
    for (int i = 0; i < 4; i++){
        if(this->materia[i] == NULL)
        {
            this->materia[i] = learn;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (int i = 0; i< 4; i++){
        if (this->materia[i]->getType() == type)
        {
            return (this->materia[i]->clone());
        }
    }
    return NULL;
}
