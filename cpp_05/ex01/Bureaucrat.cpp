#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copied){
    std::cout << "Copy constructor called." << std::endl;
    *this = copied;
}

const std::string Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rval){
    std::cout << "Copy assign operator called." << std::endl;
    if (this != &rval){
        this->_grade = rval.getGrade();
    }
    return (*this);
}

void Bureaucrat::incGrade()
{
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decGrade()
{
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void Bureaucrat::signForm(Form& form){
    if (form.getIsSigned())
        std::cout << _name << " signed " << form.getName() << std::endl;
    else
    {
        std::cout << _name << " could't sign " << form.getName()
                  << " because grade is low." << std::endl;
    }
}


Bureaucrat::~Bureaucrat(){
    // std::cout << _name << " destructed." << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade "
        << bureaucrat.getGrade() << "." << std::endl;
    return (out);
}
