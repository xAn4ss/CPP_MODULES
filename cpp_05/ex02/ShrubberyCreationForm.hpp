#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& copied);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rval);
    ~ShrubberyCreationForm();

    std::string getTarget() const;

    void execute(Bureaucrat const & executor) const;
};


#endif