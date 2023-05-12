#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat Q("hamid", 74);
        Form A("lazzea", 75, Q.getGrade());
        // A.beSigned(Q);
        // std::cout << A.getIsSigned() << std::endl;
        Q.signForm(A);
        // std::cout << A;
    }
    catch (std::exception & e){

        std::cout << std::endl << e.what() << std::endl;
    }
}