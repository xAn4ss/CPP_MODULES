#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    try {
        Bureaucrat Q("hamid", 50);
        ShrubberyCreationForm a("ana");
        Q.executeForm(a);
    }
    catch (std::exception & e){

        std::cout << "-=============-" << std::endl << e.what() << std::endl;
    }
}