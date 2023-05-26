#include "BitcoinExchange.hpp"

int main(int ac, char **av){
   
    std::ifstream in;
    std::map<std::string, float> data;
   
    if (ac != 2)
    {
        std::cout << "Error: Check arguments." << std::endl;
        return 0; 
    }
    get_in_file(in);
    fill_data(in, data);
    std::ifstream input(av[1]);
    if (!input.is_open())
    {
        std::cout << "Can't open input file." << std::endl;
        return(EXIT_FAILURE);
    }else if(input.peek() == EOF){
        std::cout << "Input file is empty !!" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string date, value, buf; 
    getline(input, buf);
    if (buf.compare("date | value"))
    {
        std::cout << "Syntax error" << std::endl;
        return (EXIT_FAILURE);
    }
    while (getline(input, buf))
    {
        int i;
        if ((i = buf.find("|", 0)) == -1)
        {
            std::cout << "Error: bad syntax \"data | value\"" << std::endl;
        }
        else
        {
            std::stringstream str(buf);
            printData(data, date, value, str);
        }
    }
    if (buf.empty())
    {
        std::cout << "Enter date | value in input.txt" << std::endl;
    }
}