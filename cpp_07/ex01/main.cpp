#include "iter.hpp"


template <typename T> void printIt(T arg)
{
    std::cout << arg << std::endl;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    double arr2[] = {1.2, 2.3, 3.4, 4.5, 5.6};
    std::string arr3[] = {"wahed", "jouj", "tlata", "rb3", "5"};

    iter<int>(arr, 5, printIt);
}