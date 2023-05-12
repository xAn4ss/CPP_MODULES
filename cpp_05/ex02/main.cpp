#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    try {

    Bureaucrat Q("hamid", 71);
    ShrubberyCreationForm a("ana");
    RobotomyRequestForm b("hiya");
    PresidentialPardonForm c("Howa");
    Q.executeForm(a);
    Q.executeForm(b);
    Q.executeForm(c);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}