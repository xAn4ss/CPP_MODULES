#ifndef SCALARCONVERTER_HPP
#define SCALARCNVERTER_HPP

#include <iostream>
#include <cstring>

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
    static int _int;
    static float _float;
    static double _double;
    static std::string _char;
    static input_type  _type;
    ScalarConverter(std::string input);
    
public:
    static void         Convert(std::string input);
    static void         setInt(int nb);
    static input_type   getType(std::string);
    static void         setType(input_type type);
    static bool         isItInt(std::string input);
    static bool         isChar(std::string input);
    static bool         isFloat(std::string input);
    static bool         isDouble(std::string input);
    static bool         isLiteral(std::string input);
    static void         convertToInt(std::string input);
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

bool ScalarConverter::isItInt(std::string input){

    if (input.find(".", 0) != -1)
        return false;
    long nb = atol(input.c_str());
    if (nb > INT32_MAX || nb < INT32_MIN)
        return false;
    _int = static_cast<int>(nb);
    return true;
}

bool ScalarConverter::isChar(std::string input)
{
    if (!strcmp(input.c_str(), "nan") || !strcmp(input.c_str(), "nanf") ||
        !strcmp(input.c_str(), "+inf") || !strcmp(input.c_str(), "+inff") ||
        !strcmp(input.c_str(), "-inf") || !strcmp(input.c_str(), "-inff"))
            return false;
    if (!isprint(input[0]))
        _char = "Non displayable";
    else if (isalpha(input[0]))
        _char = input[0];
    return true;
}

bool ScalarConverter::isFloat(std::string input){
    if (input.find(".", 0) != -1 && input.back() == 'f')
    {
        double nb = atof(input.c_str());
        _float = static_cast<float>(nb);
        return true;
    }
    return false;
}

bool ScalarConverter::isDouble(std::string input){
    if (input.find(".", 0) != -1 && input.back() != 'f')
    {
        _double = atof(input.c_str());
        return true;
    }
    return false;
}

bool ScalarConverter::isLiteral(std::string input){
    if (strcmp(input.c_str(), "nan") || strcmp(input.c_str(), "nanf") ||
    strcmp(input.c_str(), "+inf") || strcmp(input.c_str(), "+inff") ||
    strcmp(input.c_str(), "-inf") || strcmp(input.c_str(), "-inff"))
        return true;
    else
        return false;
}

input_type ScalarConverter::getType(std::string input){

    if (ScalarConverter::isItInt(input))
        return INT;
    else if (ScalarConverter::isChar(input))
        return CHAR;    
    else if (ScalarConverter::isFloat(input))
        return FLOAT;
    else if (ScalarConverter::isDouble(input))
        return DOUBLE;
    else if (ScalarConverter::isLiteral(input))
        return LITERALS;

    throw std::exception();
    //else throw exception
}

void ScalarConverter::convertToInt(std::string input){

}


void ScalarConverter::Convert(std::string input)
{
    _int = 0;
    _char = "";
    _float = 0;
    _double = 0;
    setType(getType(input));
    // _type = getType(input);
    // switch (_type)
    // {
    // case INT:
    //     std::cout << "int" << std::endl;
    //     // convertToInt(input);
    //     break;
    
    // default:
    //     break;
    // }
}



#endif