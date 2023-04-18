#ifndef SCALARCONVERTER_HPP
#define SCALARCNVERTER_HPP

#include <iostream>


enum input_type{
    INT,
    CHAR,
    FLOAT,
    DOUBLE,
    LITERALS
};

class ScalarConverter
{
private:
    int _int;
    float _float;
    double _double;
    std::string _char;
    input_type  _type;
    ScalarConverter(std::string input);
    
public:
    void        Convert(std::string input);
    input_type  getType(std::string);
    bool        isInt(std::string input);
    bool        isChar(std::string input);
    bool        isFloat(std::string input);
    bool        isDouble(std::string input);
    bool        isLiteral(std::string input);
    ~ScalarConverter();
};

ScalarConverter::ScalarConverter(std::string input)
{

}

ScalarConverter::~ScalarConverter()
{

}

input_type ScalarConverter::getType(std::string input){

    if (isInt(input))
        return INT;
    else if (isChar(input))
        return CHAR;    
    else if (isFloat(input))
        return FLOAT;
    else if (isDouble(input))
        return DOUBLE;
    else if (isLiteral(input))
        return LITERALS;
}

void ScalarConverter::Convert(std::string input)
{

    this->_type = this->getType();
}



#endif