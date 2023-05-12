#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

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
    ~Form();
    Form(const Form& copied);
    Form& operator=(const Form& rval);

    std::string   getName() const;
    bool                getIsSigned() const;
    int           getToSign() const;
    int           getGrade() const;

    void beSigned(Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "FORM: Grade Too High.";
        }
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char* what() const throw()
        {
            return "FORM: Grade Too Low.";
        }
    };

};

std::ostream& operator<<(std::ostream& out, Form& form);

#endif 