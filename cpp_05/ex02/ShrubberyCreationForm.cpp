#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copied) : Form(copied){
    *this = copied;
}

std::string ShrubberyCreationForm::getTarget()const{
    return (_target);
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rval){
    if(this != &rval){
        this->_target = rval.getTarget();
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor)const{
    if (executor.getGrade() > this->getToSign())
        throw ShrubberyCreationForm::GradeTooLowException();
    else
    {
        
        std::cout << "+64563543465468463546464" << std::endl;
//      ccee88oo
//   C8O8O8Q8PoOb o8oo
//  dOB69QO8PdUOpugoO9bD
// CgggbU8OU qOp qOdoUOdcb
//     6OuU  /p u gcoUodpP
//       \\\//  /douUP
//         \\\////
//          |||//
//          |||\/
//          |||||
//    .....//||||\....
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
