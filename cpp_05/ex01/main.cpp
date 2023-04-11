#include "Bureaucrat.hpp"

int main ()
{
    try {
        Bureaucrat Q("hamid", 150);
        
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}