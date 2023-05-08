#include "RPN.hpp"

int main(int ac, char ** av){

    if (ac != 2)
    {
        std::cout << "ERROR: Check arguments." << std::endl;
        return 0;
    }
    std::stringstream s(av[1]);
    std::list<int> data;
    std::string buf;
    std::list<int>::iterator it;
    while (getline(s, buf, ' '))
    {
        if (buf.size() != 1)
        {
            std::cout << "ERROR: Check input." << std::endl;
            return 0;
        }
        if (isdigit(buf[0]))
        {
            data.push_back(atoi(buf.c_str()));
        }
        else if (buf[0] == '+' || buf[0] == '-' || buf[0] == '*' || buf[0] == '/')
        {
            switch
        }
    }
    for (it = data.begin(); it != data.end(); it++)
    {
        std::cout << *it << std::endl;

    }
    return 0;
}