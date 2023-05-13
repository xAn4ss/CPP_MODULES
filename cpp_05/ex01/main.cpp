#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat Q("tmp1", 50);
        Form A("tmp2", 100, Q.getGrade());

        std::cout << A << std::endl;
        std::cout << "-------" << std::endl;
        A.beSigned(Q);
        std::cout << A << std::endl;
        std::cout << "-------" << std::endl;
        Q.signForm(A);
    }
    catch (std::exception & e){

        std::cout << e.what() << std::endl;
    }
}