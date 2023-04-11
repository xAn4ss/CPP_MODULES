#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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

    std::string getName() const;
    int         getGrade() const;   
    void        incGrade();
    void        decGrade();

    class GradeTooHighException : std::exception
    {
        virtual const char* what() {
            return "Grade is too high";
        }
    };
    
    class GradeTooLowException : std::exception
    {
        virtual const char* what() {
            return "Grade is too low";
        }
    };

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);
#endif