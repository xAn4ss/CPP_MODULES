#include "ScalarConverter.hpp"

int ScalarConverter::_int = 0;
std::string ScalarConverter::_char = "";
float       ScalarConverter::_float = 0;
double      ScalarConverter::_double = 0;

int main(int ac, char **av){

    if (ac != 2)
        return 0;
    ScalarConverter::Convert(av[1]);
    return 0;
}