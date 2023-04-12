#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat Q("hamid", 50);
        Form A("lazzea", 50, Q.getGrade());
        Q.signForm(A);
        
        
    }
    catch (std::exception & e){

        std::cout << "-=============-" << std::endl << e.what() << std::endl;
    }
}