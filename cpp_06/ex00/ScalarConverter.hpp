#ifndef SCALARCONVERTER_HPP
#define SCALARCNVERTER_HPP

#include <iostream>

class ScalarConverter
{
private:
    int _int;
    float _float;
    double _double;
    std::string _char;

    ScalarConverter(std::string input);
public:
    void Convert(std::string _literal);
    ~ScalarConverter();
};

ScalarConverter::ScalarConverter(std::string input)
{

}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::Convert(std::string target)
{
    
}



#endif