#ifndef PMERGE_HPP
#define PMERGE_HPP

#include <iostream>
#include <vector>
#include <deque>

class Pmerge
{
private:
    std::vector<int>    SortedVec;
    std::vector<int>    UnsortedVec;
    std::deque<int>     SortedDeq;
    std::deque<int>     UnsortedDeq;
public:
    Pmerge(int *arr);
    ~Pmerge();
};

Pmerge::Pmerge(int *arr)
{
    SortedVec = new std::vector<int>();
}

Pmerge::~Pmerge()
{
}


#endif