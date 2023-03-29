#include "Character.hpp"

Character::Character(const std::string& name){

	this->_name = name;
    std::cout << "Character \""<< this->getName() << "\" constructed." << std::endl; 
	for (int i = 0; i < 4; i++)
		this->material[i] = NULL;
}

Character::Character(const Character& rval){
    
    std::cout << "Character \""<< rval.getName() <<
        "\" is created" <<std::endl;
    for(int i = 0; i < 4; i++)
        this->material[i] = NULL;
    *this = rval;
}

Character& Character::operator=(const Character& rval){
    
    if (this != &rval)
    {
        this->_name = rval._name;
        for (int i = 0; i < 4; i++){
            if (this->material[i])
                delete this->material[i];
            if (rval.material[i])
                this->material[i] = rval.material[i]->clone();
            else
                this->material[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    std::cout << "Character \"" << this->getName() <<
    "\" is destructed" << std::endl;
    for (int i = 0; i < 4; i++){
        if (this->material[i])
            delete this->material[i];
    }
}

const std::string& Character::getName()const{
    return this->_name;
}

void Character::equip(AMateria* m){

    for(int i = 0; i < 4;i++)
    {
        if (this->material[i] == NULL)
        {
            this->material[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 4 && idx >= 0)
        this->material[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
   	if (idx >= 0 && idx < 4 && this->material[idx] != NULL)
		this->material[idx]->use(target);
}
