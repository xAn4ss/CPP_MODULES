#include "ScalarConverter.hpp"

int main(int ac, char **av){

    if (ac != 2)
        return 0;
    ScalarConverter::Convert(av[1]);
    return 0;
}