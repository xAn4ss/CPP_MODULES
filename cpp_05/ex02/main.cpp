#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    try {

    Bureaucrat Q("Bureaucrat", 24);
    ShrubberyCreationForm a("A");
    RobotomyRequestForm b("B");
    PresidentialPardonForm c("C");

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << "--------" << std::endl;

    Q.executeForm(a);
    std::cout << "--------" << std::endl;
    Q.executeForm(b);
    std::cout << "--------" << std::endl;
    Q.executeForm(c);
    std::cout << "--------" << std::endl;
    
    a.beSigned(Q);
    b.beSigned(Q);
    c.beSigned(Q);
    
    std::cout << "--------" << std::endl;
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    std::cout << "--------" << std::endl;
    
    Q.executeForm(a);
    Q.executeForm(b);
    Q.executeForm(c);
    }catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}