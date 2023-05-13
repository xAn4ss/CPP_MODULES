#include "Intern.hpp"

int main ()
{
    try {
        Bureaucrat  A("Bureacrat", 20);
        Intern      random;
        Form*       rff;

        rff = random.makeForm("roboto", "hamid");
        if (rff)
        {
            std::cout << *rff;
            rff->beSigned(A);
            A.executeForm(*rff);
        }
    }catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}