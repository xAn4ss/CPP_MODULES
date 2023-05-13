#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <map>

class Intern
{
    public:
        Intern();
        Intern(const Intern& copied);
        Intern& operator=(const Intern& rval);
        ~Intern();

        Form *makeForm(std::string , std::string );
};

#endif 