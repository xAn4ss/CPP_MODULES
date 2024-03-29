#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constructer called." << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter deconstructed." << std::endl;
}

bool ScalarConverter::isInt(std::string input){

    if (input.find(".") != (size_t)-1)
        return false;
    if (!isdigit(input[0]))
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
    if (isalpha(input[0]) && isprint(input[0]))
    {
        _char = input[0];
        return true;
    }
    return false;
}

bool ScalarConverter::isFloat(std::string input){
    if (input.find(".") != (size_t)-1 && input.back() == 'f')
    {
        double nb = atof(input.c_str());
        _float = static_cast<float>(nb);
        return true;
    }
    return false;
}

bool ScalarConverter::isDouble(std::string input){
    if (input.find(".") != (size_t)-1 && input.back() != 'f')
    {
        _double = atof(input.c_str());
        return true;
    }
    return false;
}

bool ScalarConverter::isLiteral(std::string input){
    if (!strcmp(input.c_str(), "nan") || !strcmp(input.c_str(), "nanf") ||
    !strcmp(input.c_str(), "+inf") || !strcmp(input.c_str(), "+inff") ||
    !strcmp(input.c_str(), "-inf") || !strcmp(input.c_str(), "-inff"))
        return true;
    else
        return false;
}

input_type ScalarConverter::getType(std::string input){

    if (isInt(input))
        return INT;
    else if (isFloat(input))
        return FLOAT;
    else if (isDouble(input))
        return DOUBLE;
    else if (isChar(input))
        return CHAR;    
    else if (isLiteral(input))
        return LITERALS;
    else 
    {
        std::cout << "what type is that ? \'" << input << "\'." << std::endl;
        exit(0);
    }
    //else throw exception
}

void ScalarConverter::convertFromInt(){
    if (isprint(_int))
    {
        _char = static_cast<char>(_int);
        _char.insert(0, "\'");
        _char.push_back('\'');
    }
    else
        _char = "Non displayable";
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::convertFromChar()
{
    _int = static_cast<int>(_char[0]);
    _float = static_cast<float>(_char[0]);
    _double = static_cast<double>(_char[0]);
}

void ScalarConverter::convertFromFloat(){
    _int = static_cast<int>(_float);
    if (isprint(_float))
    {
        _char = static_cast<char>(_float);
        _char.insert(0, "\'");
        _char.push_back('\'');
    }
    else
        _char = "Non displayable";
    _double = static_cast<double>(_float);
}

void ScalarConverter::convertFromDouble(){
    std::cout << _double << std::endl;
    _int = static_cast<int>(_double);
    if (isprint(_double))
    {
        _char = static_cast<char>(_double);
        _char.insert(0, "\'");
        _char.push_back('\'');
    }
    else
        _char = "Non displayable";
    _float = static_cast<float>(_double);
}

void ScalarConverter::convertFromLiterals(std::string input){
    if (input.find("nan") != (size_t)-1)
    {
        _char = "impossible";
        _float = NAN;
        _double = NAN;
    }else if (!strcmp(input.c_str(), "+inf") || !strcmp(input.c_str(), "-inf")
        || !strcmp(input.c_str(), "+inff") || !strcmp(input.c_str(), "-inff"))
    {
        int sign = 1;
        if (input[0] == '-')
            sign *= -1;
        _char = "impossible";
        _float = INFINITY * sign;
        _double = INFINITY * sign;
    }
    std::cout << std::fixed << std::setprecision(1) << 
    "char      : " << _char << std::endl <<
    "int       : " << "impossible" << std::endl <<
    "float     : " << _float << "f" << std::endl <<
    "double    : " << _double << std::endl;
}

void ScalarConverter::Convert(std::string input)
{
    switch (getType(input))
    {
        case INT:
            std::cout << "int" << std::endl;
            convertFromInt();
            break;
        case FLOAT:
            std::cout << "float" << std::endl;
            convertFromFloat();
            break;
        case DOUBLE:
            std::cout << "double" << std::endl;
            convertFromDouble();
            break;
        case CHAR:
            std::cout << "char" << std::endl;
            convertFromChar();
            break;
        case LITERALS:
            std::cout << "literals" << std::endl;
            convertFromLiterals(input);
            return;
            break;
    }
    std::cout << std::fixed << std::setprecision(1) << 
    "char      : " << _char << std::endl <<
    "int       : " << _int << std::endl <<
    "float     : " << _float << "f" << std::endl <<
    "double    : " << _double << std::endl;
}