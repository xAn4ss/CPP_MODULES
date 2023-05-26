#include "Pmerge.hpp"

Pmerge::Pmerge()
{
    std::cout << "Constructed" << std::endl;
}

Pmerge::~Pmerge()
{
    std::cout << "Destructed" << std::endl;
}

Pmerge::Pmerge(const Pmerge& copied)
{
    *this = copied;
}

Pmerge& Pmerge::operator=(const Pmerge& rval)
{
    (void)rval;
    return (*this);
}

int check_sorted(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int j = i + 1;
        if (arr[i] < arr[j])
            count++;
    }
    if (count == size - 1)
        return 1;

    return 0;
}



int getArrayAndCheck(int *arr, int ac, char **av)
{
        int i = 0;
    std::string num;
    long nb;
    while (i < ac - 1)
    {
        num = av[i + 1];
        if (num.find_first_not_of("+0123456789") == std::string::npos)
        {
            if ((nb = atol(num.c_str())) > RAND_MAX)
            {
                std::cout << "ERROR: max int."<< std::endl;
                return 0;
            }
            arr[i] = nb;
        }
        else
        {
            std::cout << "Error in numbers !!" << std::endl;
            return 0;
        }
        i++;
    }
    // int y;
    // for (i = 0; i < ac - 1; i++)
    // {
    //     y = i + 1;
    //     for (;y < ac - 1; y++)
    //     {
    //         if (arr[i] == arr[y])
    //         {
    //             std::cout << "Duplicated input !!!" << std::endl;
    //             return 0;
    //         }
    //     }
    // }
    if (check_sorted(arr, ac-1))
    {
        std::cout << "Sorted !!!" << std::endl;
        return 0;
    }
    return 1;
}