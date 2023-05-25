#include "BitcoinExchange.hpp"

void get_in_file(std::ifstream& in){

    in.open("data.csv");
    if (!in.is_open())
    {
        std::cout << "Cannot open file." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void fill_data(std::ifstream &in, std::map<std::string, float> &data)
{
    std::string buf;
    char *end;
    getline(in, buf);
    while (getline(in, buf))
    {
        float num = strtof(buf.substr(11).c_str(), &end);
        data.insert(std::pair<std::string, float>(buf.substr(0, 10), num));
    }
}


bool checkDate(std::string date){
    
    int year, month, day;
    if (date.find_first_not_of("-0123456789") == (size_t)-1 && date.length() == 10)
    {
        year = atoi(date.substr(0, 4).c_str());
        // std::cout << year << " ";
        if ((month = atoi(date.substr(5,7).c_str())) > 12 ||  month < 1)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }   
        // std::cout << month << " ";
        if ((day = atoi(date.substr(8).c_str())) < 1 || day > 31)
        {
            std::cout << "Error: bad input => " << date << std::endl;
            return false;
        }
        if (year < 2009 || year > 2022)
        {
            std::cout << "DB don't have this data" << std::endl;
            return false;
        }
        if (month == 2 && day > 29)
        {
            std::cout << "Date doesn't exist" << std::endl;
        }
        return true;
    }
    else
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
}

bool checkValue(std::string value){
    char *end;
    if (value.find_first_not_of("+0123456789. ") == (size_t)-1)
    {
        long double val = strtold(value.c_str(), &end);
        // std::cout << val << std::endl;
        if (val > 1000 || val < 0)
        {
            std::cout << "Error: check value => " << value << std::endl;
            return false;
        }
        return true;
    }
    else
    {
        std::cout << "ERROR: Check value" << std::endl;
        return false;
    }
}