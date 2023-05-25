#include "Pmerge.hpp"

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





int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Enter numbers !!!" << std::endl;
        return 0;
    }
    int arr[ac - 1];
    int i = 0;
    std::string num;
    long nb;
    while (i < ac - 1)
    {
        num = av[i + 1];
        if (num.find_first_not_of("+0123456789") == std::string::npos)
        {
            if ((nb = atol(num.c_str())) > INT_MAX)
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
    int y;
    for (i = 0; i < ac - 1; i++)
    {
        y = i + 1;
        for (;y < ac - 1; y++)
        {
            if (arr[i] == arr[y])
            {
                std::cout << "Duplicated input !!!" << std::endl;
                return 0;
            }
        }
    }
    if (check_sorted(arr, ac-1))
    {
        std::cout << "Sorted !!!" << std::endl;
        return 0;
    }
    std::vector<int> vec;
    std::deque<int> deq;
    for (int i = 0; i < ac - 1; i++)
    {
        vec.push_back(arr[i]);
        deq.push_back(arr[i]);
    }

    Pmerge Pm;
    Pm.processSort(vec, "std::vector");
    Pm.processSort(deq, "std::deque");

    return 0;
}