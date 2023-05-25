#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <vector>
#include <deque>

class Pmerge
{
    private:

    public:
        Pmerge();
        ~Pmerge();
        template <typename T> void mergeAndInsert(T &cont, int begin, int last);
        template <typename T> void merge(T &cont, int begin, int mid, int last);
        template <typename T> void insertion(T &cont, int low, int last);
};

template <class T> void Pmerge::insertion(T &cont, int begin, int last)
{
    for (int i = begin + 1; i <= last; i++)
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

template <class T> void Pmerge::merge(T &cont, int begin, int mid, int last)
{
    int leftSize = mid - last + 1;
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
    int k = last;
    i = 0, y = 0;
    while (i < leftSize && y < rightSize)
    {
        if (left[i] <= right[y])
            cont[k++] = left[i++];
        else
            cont[k++] = right[y++];
    }
    while (i < leftSize)
        cont[k++] = left[i++];
    while (y < rightSize)
        cont[k++] = right[y++];
}

template <class T> void Pmerge::mergeAndInsert(T &cont, int begin, int last)
{
    if (begin < last)
    {
        if (last - begin + 1 <= 16)
            insertion(cont, begin, last);
        else{
            int mid = begin + (last - begin) / 2;
            mergeAndInsert(cont, begin, mid);
            mergeAndInsert(cont, mid + 1, last);
            merge(cont, begin, mid, last);
        }
    }
}

#endif