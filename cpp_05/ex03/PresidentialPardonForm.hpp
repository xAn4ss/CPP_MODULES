#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& copied);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& rval);
        ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif