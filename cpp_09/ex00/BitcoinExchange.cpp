#include "BitcoinExchange.hpp"

void get_in_file(std::ifstream& in){

    in.open("data.csv");
    if (!in.is_open())
    {
        std::cout << "Cannot open file." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void fill_data(std::istream& in, std::map<std::string, float>& data)
{
    
}