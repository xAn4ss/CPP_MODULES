#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";

    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "*" << &string << "*" << std::endl;
    std::cout << " sPTR> " << stringPTR << "_____  sREF> " << &stringREF << std::endl <<  "***************"; 

    std::cout << "*" << string << "*" << std::endl;
    std::cout << std::endl << "value sPTR> " << *stringPTR << "_____ value sREF> " << stringREF << std::endl; 
}