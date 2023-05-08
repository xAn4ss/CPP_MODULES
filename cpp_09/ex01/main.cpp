#include "RPN.hpp"

int main(int ac, char ** av){

    if (ac != 2)
    {
        std::cout << "ERROR: Check arguments." << std::endl;
        return 0;
    }
    std::stringstream s(av[1]);
    std::stack<int> stack;
    std::string buf;
    while (getline(s, buf, ' '))
    {
        std::cout << buf << std::endl;
    }
    return 0;
}