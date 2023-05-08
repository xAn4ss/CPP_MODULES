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
    char *end {};
    getline(in, buf);
    while (getline(in, buf))
    {
        float num = strtof(buf.substr(11).c_str(), &end);
        data.insert(std::pair<std::string, float>(buf.substr(0, 10), num));
        // std::cout << buf << ".  (" << buf.substr(0,10) << ")"<<
        // "  ("<< num << ")."<< std::endl;
    }
}

bool checkDate(std::string date){
    
    int year, month, day;
    if (isdigit(date[0]) && isdigit(date[1]) && isdigit(date[2]) && isdigit(date[3]) 
        && date[4] == '-' && isdigit(date[5]) && isdigit(date[6]) && date[7] == '-'
         && isdigit(date[8]) && isdigit(date[9]))
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
        // std::cout << day << " | ";
        return true;
    }
    else
    {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
}

bool checkValue(std::string value){
    char *end {};
    long val = strtold(value.c_str(), &end);
    // std::cout << val << std::endl;
    if (val > 1000 || val < 0)
    {
        std::cout << "Error: check value => " << value << std::endl;
        return false;
    }
    return true;
}