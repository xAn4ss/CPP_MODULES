#include "Pmerge.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "Enter numbers !!!" << std::endl;
        return 0;
    }
    int arr[ac - 1];
    if (!getArrayAndCheck(arr, ac, av))
    {
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
    
    std::cout << "Before  : ";
    Pm.printElement(vec);
    
    double vec_t = Pm.processSort(vec);
    
    std::cout << "After  : ";
    Pm.printElement(vec);
    
    std::cout << std::endl << "Time to process a range of size "<< vec.size() << " elements with std::vector : "
    << std::fixed <<  vec_t << " us" << std::endl;

    double deq_t = Pm.processSort(deq);
    
    std::cout << std::endl << "Time to process a range of size "<< deq.size() << " elements with std::deque : "
    << std::fixed <<  deq_t << " us" << std::endl;
    
    return 0;
}