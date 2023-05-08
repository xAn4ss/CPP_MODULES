#include "BitcoinExchange.hpp"

int main(int ac, char **av){
   
    std::ifstream in;
    std::map<std::string, float> data;
   
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 0; 
    }

    get_in_file(in);
    fill_data(in, data);
    std::ifstream input(av[1]);
    if (!input.is_open())
    {
        std::cout << "Can't open input file." << std::endl;
        exit(EXIT_FAILURE);
    }
    std::string buf;
    char *end {};
    getline(input, buf);
    std::string date, value;
    while (getline(input, buf))
    {
        int i;
        if ((i = buf.find("|", 0)) == -1)
        {
            std::cout << "Error: bad syntax \"data | value\"" << std::endl;
        }
        else
        {
            date = buf.substr(0, i-1);
            value = buf.substr(i+1);
            // std::cout << date << "--" << value << std::endl;
            if (checkDate(date) && checkValue(value))
            {
                std::cout << date << " =>" << value << " = "
                << data[date] * strtof(value.c_str(), &end) << std::endl;
            }
        }
    }
    
    std::cout << data["2012-03-02"] << std::endl;
}