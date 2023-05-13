#include "Form.hpp"


Form::Form(std::string name, int toSign, int grade) : _name(name), _isSigned(0), _toSign(toSign), _grade(grade)
{
    std::cout << "Form " << _name << " constructed." << std::endl;
    if (_grade < 1)
        throw Form::GradeTooHighException();
    else if (_grade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form& copied) : _name(copied.getName()), _toSign(copied.getToSign()), _grade(copied.getGrade())
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copied;
}

Form& Form::operator=(const Form& rval){
    std::cout << "Copy assign operator." << std::endl;
    if (this != &rval)
    {
        this->_isSigned = rval._isSigned;
    }
    return (*this);
}

std::string Form::getName() const{
    return _name;
}

bool    Form::getIsSigned() const{
    return _isSigned;
}

int Form::getToSign() const{
    return _toSign;
}

int Form::getGrade() const {
    return _grade;
}

void Form::beSigned(Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() > this->getToSign())
        throw Form::GradeTooLowException();
    else
        this->_isSigned = true;

}
std::ostream& operator<<(std::ostream& out, Form& form){

    out << "Form " << form.getName();
    if (form.getIsSigned())
        out << " is signed";
    else
        out << " is not signed";
    out << " grade to sign is " << form.getToSign();
    out << " grade is " << form.getGrade() << std::endl;
    return (out);
}

Form::~Form()
{
    std::cout << "Form " << _name << " deconstructed." << std::endl;
}
