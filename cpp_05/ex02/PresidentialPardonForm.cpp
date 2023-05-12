#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
    : Form("PresidentialPardon", 25, 5){
        this->_target = target;
}


PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor)
  const{

    if (executor.getGrade() > this->getToSign())
        throw PresidentialPardonForm::GradeTooLowException();
    else
        std::cout << _target << " has been pardoned." << std::endl;
}