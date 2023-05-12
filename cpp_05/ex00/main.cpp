#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat Q("hamid", 1);
        Q.incGrade();
        std::cout << Q;
        
        // Bureaucrat A("LaZone", 2);
        // A.incGrade();
        // std::cout << A;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}