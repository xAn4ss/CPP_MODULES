#include "Intern.hpp"

Form *CreatePresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form *CreateRobotomy(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *CreateShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}


Intern::Intern()
{
}

Form* Intern::makeForm(std::string formName, std::string target)
{
    Form* (*fct[3])(std::string) = {
        &CreatePresidential,
        &CreateRobotomy,
        &CreateShrubbery
    };
    std::string fcts[3] = {
        "presidential pardon",
        "robotomy request",
        "shrubbery creation"
    };
    for (int i = 0; i < 3 ; i++)
    {
        if (!fcts[i].compare(formName))
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (fct[i])(target);
        }
    }
    std::cout << "Intern couldn't found form." << std::endl;
    return NULL ;
}

Intern::~Intern()
{

}