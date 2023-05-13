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
    if (executor.getGrade() > this->getToSign() && this.)
        throw ShrubberyCreationForm::GradeTooLowException();
    else
    {
        std::string t = _target+ "_shrubbery";
        std::ofstream  file(t.c_str());
        if (file.is_open())
        {
            file << "      ccee88oo            \n"  
            << "   C8O8O8Q8PoOb o8oo      \n"  
            << "  dOB69QO8PdUOpugoO9bD    \n"  
            << " CgggbU8OU qOp qOdoUOdcb  \n"  
            << "     6OuU  /p u gcoUodpP  \n"  
            << "       \\\\//  /douUP      \n"  
            << "         \\\\////          \n"  
            << "          |||//           \n"   
            << "          |||||           \n"   
            << "          |||||           \n"   
            << "    .....//||||\\....      \n";    
            file.close();
        }
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
