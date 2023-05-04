#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>


class Span
{
private:
    unsigned int        _size;
    std::vector<int>    _vect;
public:
    void addNumber(int num);
    Span(unsigned int n);
    ~Span();
    class maxSizeException : public std::exception{
       const char* what() const throw() {
            return "Can't add more more numbers, max size achieved";
    };
}
};

Span::Span(unsigned int size) : _size(size)
{
    std::cout << "Span constructed with a size of : " 
        << _size << std::endl;
}

void Span::addNumber(int num){
    if (_vect.size() == _size)
        throw 
}

Span::~Span()
{
    std::cout << "Deconstructed" << std::endl;
}



#endif