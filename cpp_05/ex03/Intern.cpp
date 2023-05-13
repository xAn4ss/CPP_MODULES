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
    std::map<std::string, Form*(*)(std::string)> fmap;
    fmap["presidential pardon"] = &CreatePresidential;
    fmap["robotomy request"] = &CreateRobotomy;
    fmap["shrubbery creation"] = &CreateShrubbery;
    if (fmap.find(formName) != fmap.end())
    {
        std::cout << "Intern creates " << formName << std::endl;
        return fmap[formName](target);
    }
    std::cout << "Intern couldn't found form." << std::endl;
    return NULL ;
}

Intern::~Intern()
{

}