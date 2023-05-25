#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <iomanip>
#include <vector>
#include <deque>
#include <ctime>
#include <math.h>
class Pmerge
{
    private:
    public:
        Pmerge();
        ~Pmerge();
        template <typename T> void processSort(T &cont, std::string);
        template <typename T> void printElement(T cont);
        template <typename T> void insertion(T &cont, int low, int last);
        template <typename T> void mergeAndInsert(T &cont, int begin, int last);
        template <typename T> void merge(T &cont, int begin, int mid, int last);
};

int check_sorted(int *arr, int size);

template <class T> void Pmerge::insertion(T &cont, int begin, int last)
{
    for (int i = begin + 1; i <= last; ++i)
    {
        int tmp = cont[i];
        int j = i - 1;
        while (j >= begin && cont[j] > tmp)
        {
            cont[j + 1] = cont[j];
            --j;
        }
        cont[j + 1] = tmp;
    }
}

template <typename T> void Pmerge::printElement(T cont)
{
    typename T::iterator it = cont.begin();
    while (it != cont.end())
        std::cout << *it++ << " ";
    std::cout << std::endl << std::endl;
}

template <class T> void Pmerge::merge(T &cont, int begin, int mid, int last)
{
    int leftSize = mid - begin + 1;
    int rightSize = last - mid;

    std::vector<int> left(leftSize);
    std::vector<int> right(rightSize);

    int i = 0, y = 0;
    while (i < leftSize)
    {
        left[i] = cont[begin + i];
        i++;
    }
    while (y < rightSize)
    {
        right[y] = cont[mid + y + 1];
        y++;
    }
    int k = begin;
    i = 0, y = 0;
    while (i < leftSize && y < rightSize)
    {
        if (left[i] <= right[y])
            cont[k++] = left[i++];
        else
            cont[k++] = right[y++];
    }
}

template <class T> void Pmerge::mergeAndInsert(T &cont, int begin, int last)
{
    if (begin < last)
    {
        if (last - begin  +  1 <= 16)
            insertion(cont, begin, last);
        else{
            int mid = begin + (last - begin) / 2;
            mergeAndInsert(cont, begin, mid);
            mergeAndInsert(cont, mid + 1, last);
            merge(cont, begin, mid, last);
        }
    }
}

template <typename T> void Pmerge::processSort(T &cont, std::string str)
{
    std::cout << "Before  : ";
    printElement(cont);
    std::clock_t t1 = std::clock();
    mergeAndInsert(cont, 0, cont.size() - 1);
    std::clock_t t2 = std::clock();
    std::cout << "After  : ";
    printElement(cont);
    std::cout << std::endl << "Time to process a range of size "<< cont.size() << " elements with "<< str << " : "
         << std::fixed << double(t2 - t1) / CLOCKS_PER_SEC << " us" << std::endl << std::endl;
}

#endif