#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 75, 45)
{
    this->_target = target;
}

std::string RobotomyRequestForm::getTarget()const {

    return (_target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copied) : Form(copied){

    *this = copied;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rval){
    if (this != &rval){
        this->_target = rval.getTarget();
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) 
  const{
    if (executor.getGrade() > this->getToSign())
        throw RobotomyRequestForm::GradeTooLowException();
    else
    {
        if ((rand() % 2) % 2){
            std::cout << "-TARABIN TARABA-" << std::endl <<
            _target << " has been robotomized succesfully." << std::endl;
        }
        else
            std::cout << "failed to robotimize " << _target << std::endl;
    }
}
