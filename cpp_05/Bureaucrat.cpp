#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copied){
    std::cout << "Copy constructor called" << std::endl;
    *this = copied;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rval){
    if (this != &rval){
        
    }
}

Bureaucrat::~Bureaucrat(){

}