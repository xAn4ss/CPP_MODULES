#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool            _isSigned;
    const int       _toSign;
    const int       _grade;  
public:
    Form(std::string name, int toSign, int grade);
    virtual ~Form();
    Form(const Form& copied);
    Form& operator=(const Form& rval);

    std::string   getName() const;
    bool                getIsSigned() const;
    int           getToSign() const;
    int           getGrade() const;

    void beSigned(Bureaucrat &bureaucrat);
    
    virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Grade Too High.";
        }
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Grade Too Low.";
        }
    };

};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif 