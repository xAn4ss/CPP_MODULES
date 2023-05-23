#include "BitcoinExchange.hpp"

int main(int ac, char **av){
   
    std::ifstream in;
    std::map<std::string, float> data;
   
    if (ac != 2)
    {
        std::cout << "Error: Can't open input file." << std::endl;
        return 0; 
    }
    std::ifstream input(av[1]);
    get_in_file(in);
    fill_data(in, data);
    if (!input.is_open())
    {
        std::cout << "Can't open input file." << std::endl;
        return(EXIT_FAILURE);
    }else if(input.peek() == EOF){
        std::cout << "Input file is empty !!" << std::endl;
        return (EXIT_FAILURE);
    }
    std::string date, value, buf; 
    char *end;
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
            date = buf.substr(0, i-1);
            value = buf.substr(i+1);

            if(checkDate(date) && checkValue(value))
            {
                if (data.find(date) == data.end()){
                    std::map<std::string, float>::iterator x;
                    x = data.upper_bound(date);
                    std::cout << date << " =>" << value << " === "
                            << (--x)->second * strtof(value.c_str(), &end) << std::endl;
                }else{
                    std::cout << date << " =>" << value << " = "
                    << data[date] * strtof(value.c_str(), &end) << std::endl;
                }
            }
        }
    }
    
    // std::cout << data["2012-03-02"] << std::endl;
}