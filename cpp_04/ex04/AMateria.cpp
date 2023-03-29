#include "AMateria.hpp"

AMateria::AMateria() : _type("no name")
{
    std::cout << this->_type << "constructed" << std::endl;
}

AMateria::AMateria(const std::string& type) : _type(type){
}

AMateria::AMateria(const AMateria& copied){
    std::cout << "Copy constructor called create: "<< copied.getType()
        << std::endl;
    *this = copied;
}

AMateria& AMateria::operator=(const AMateria& rval){
    std::cout << "copy assignement operator called" << std::endl;
    if (this != &rval){
        this->_type = rval.getType();
    }
    return (*this); 
}

const std::string& AMateria::getType()const{
    return (this->_type);
}

void AMateria::use(ICharacter& target){
    if (this->getType() == "ice")
    {
        std::cout << "* shoots an ice at " << target.getName() << " *" << std::endl;
    }
    else if (this->getType() == "cure")
    {
        std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
    }
}

AMateria::~AMateria(){
    std::cout << "AMateria \""<< this->_type << "\" destroyed" << std::endl;
}