#include "Pmerge.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Enter numbers !!!" << std::endl;
    }
    int arr[ac - 1];
    int i = 0;
    std::string num;
    while (i < ac - 1)
    {
        num = av[i + 1];
        if (num.find_first_not_of("+0123456789") == std::string::npos)
        {
            arr[i] = atol(num.c_str());
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
    std::vector<int> vec;
    for (int i = 0; i < ac - 1; i++)
    {
        vec.push_back(arr[i]);
    }
    std::vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        std::cout << *it++ << std::endl;
    }
    Pmerge Pm;
    Pm.mergeAndInsert(vec, 0, vec.size() - 1);
    it =  vec.begin();
    while (it != vec.end())
    {
        std::cout << *it++ << std::endl;
    }
    return 0;
}