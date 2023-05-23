#include "Pmerge.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "" << std::endl;
    }
    int *arr;
    int i = 0;
    std::string num;
    while (i < ac - 1)
    {
        num = av[i];
        if (num.find_first_not_of("+0123456789") == std::string::npos)
        {
            arr[i] = atol(num.c_str());
            if (arr[i] > )
            i++;
        }
    }
}