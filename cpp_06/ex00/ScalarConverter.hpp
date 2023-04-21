#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <cmath>

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
    ScalarConverter();
    
public:
    static void         Convert(std::string input);
    static void         setInt(int nb);
    static input_type   getType(std::string);
    static bool         isInt(std::string input);
    static bool         isChar(std::string input);
    static bool         isFloat(std::string input);
    static bool         isDouble(std::string input);
    static bool         isLiteral(std::string input);
    static void         convertFromInt();
    static void         convertFromChar();
    static void         convertFromFloat();
    static void         convertFromDouble();
    static void         convertFromLiterals(std::string input);
    ~ScalarConverter();
};

#endif