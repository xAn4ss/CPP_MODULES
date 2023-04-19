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
    static input_type  _type;
    ScalarConverter(std::string input);
    
public:
    static void        Convert(std::string input);
    static input_type  getType(std::string);
    static void        setType(input_type type);
    static bool        isInt(std::string input);
    static bool        isChar(std::string input);
    static bool        isFloat(std::string input);
    static bool        isDouble(std::string input);
    static bool        isLiteral(std::string input);
    static void        convertToInt(std::string input);
    ~ScalarConverter();
};

ScalarConverter::ScalarConverter(std::string input)
{

}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::setType(input_type type)
{
    
}

bool ScalarConverter::isInt(std::string input){
    long nb = atol(input.c_str());
    if (nb > INT32_MAX || nb < INT32_MIN)
        return false;
    if (input.find(".", 0) == -1)
        return false;
    
    std::cout << nb << std::endl;
}
// input_type ScalarConverter::getType(std::string input){

//     if (isInt(input))
//         return INT;
//     else if (isChar(input))
//         return CHAR;    
//     else if (isFloat(input))
//         return FLOAT;
//     else if (isDouble(input))
//         return DOUBLE;
//     else if (isLiteral(input))
//         return LITERALS;

//     throw std::exception();
//     //else throw exception
// }

void ScalarConverter::convertToInt(std::string input){

}


// void ScalarConverter::Convert(std::string input)
// {

//     _type = getType(input);
//     switch (_type)
//     {
//     case INT:
//         convertToInt(input);
//         break;
    
//     default:
//         break;
//     }
// }



#endif