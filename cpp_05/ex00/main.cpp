#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat A("A", 10);
        A.incGrade();
        std::cout << A;

        std::cout << "---------" << std::endl;
        
        A.decGrade();
        std::cout << A;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}