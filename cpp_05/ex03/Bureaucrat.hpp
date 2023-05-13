#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string _name;
        int               _grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& copied);
        Bureaucrat& operator=(const Bureaucrat& rval);

    const std::string getName() const;
    int         getGrade() const;   
    void        incGrade();
    void        decGrade();

    void        signForm(Form &form);
    void        executeForm(Form const & from);
    class GradeTooHighException : public std::exception
    {
        const char* what() const throw() {
            return "Grade is too high.";
        }
    };
    
    class GradeTooLowException : public std::exception
    {
        const char* what() const throw() {
            return "Grade is too low.";
        }
    };

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
#endif