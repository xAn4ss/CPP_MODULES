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
        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();
        Span(unsigned int n);
        Span(const Span& copied);
        Span& operator=(const Span& rval);
        void addNumbers(std::vector<int>::iterator, std::vector<int>::iterator);
        void printElement();
        ~Span();
        class maxSizeException : public std::exception{
           const char* what() const throw() {
                return "Can't add more more numbers, max size achieved.";
            }
        };
        class NoSpanException : public std::exception{
           const char* what() const throw() {
                return "**SPAN ERROR**.\n\n";
            }
        };
        int operator[](int);
};

void Span::printElement(){
    int x = 0;
    for (std::vector<int>::iterator i = _vect.begin();
             i != _vect.end() ; i++)
    {
        std::cout << this->operator[](x++) << " ";
    }
    std::cout << std::endl;
    
}
void Span::addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end){
    if(std::distance(start, end) + _vect.size() > _size)
        throw Span::maxSizeException();
    else
        _vect.insert(_vect.begin(), start, end);
}


Span::Span(const Span& copied){
    this->_size = copied._size;
    *this = copied;
}

Span& Span::operator=(const Span& rval){
    
    if (this != &rval)
    {
            this->_vect = rval._vect;
    }
    return (*this); 
}

Span::Span(unsigned int size) : _size(size)
{

    std::cout << "Span constructed with a size of : " 
        << _size << std::endl;
}

int Span::longestSpan()
{
    if (_vect.size() <= 1)
        throw Span::NoSpanException();
    int i = *std::max_element(_vect.begin(), _vect.end()) -
                      *std::min_element(_vect.begin(), _vect.end());
    // std::cout << i << std::endl;
    return (i);
}

int Span::shortestSpan(){

    if (_vect.size() < 2)
        throw Span::NoSpanException();
    Span tmp(*this);
    std::sort(tmp._vect.begin(), tmp._vect.end());
    // std::nth_element(tmp._vect.begin(), tmp._vect.begin()+1, tmp._vect.end());

        // int x = 0;
        // for (std::vector<int>::iterator i = tmp._vect.begin(); i != tmp._vect.end(); i++)
        // {
        //     std::cout << tmp._vect[x++] << " ";
        // };
        // std::cout << std::endl;
        // std::cout <<  tmp._vect[0] << " " << tmp._vect[1] << std::endl;
    
    return ((tmp._vect[1] - tmp._vect[0]) - 1);
}

void Span::addNumber(int num){
    if (_vect.size() == _size)
        throw Span::maxSizeException();
    _vect.push_back(num);
}

Span::~Span()
{
    // std::cout << "Deconstructed" << std::endl;
}

int Span::operator[](int i){
    return _vect[i];
    // std::cout << _vect[i] << std::endl;
}

#endif