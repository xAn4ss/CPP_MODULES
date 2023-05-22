#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <numeric>

class Span
{
    private:
        unsigned int        _size;
        std::vector<int>    _vect;

    public:
        Span(unsigned int n);
        Span(const Span& copied);
        Span& operator=(const Span& rval);
        ~Span();

        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();
        void addNumbers(std::vector<int>::iterator, std::vector<int>::iterator);
        void printElement();

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

#endif