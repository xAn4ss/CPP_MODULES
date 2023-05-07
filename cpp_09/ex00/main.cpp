#include "BitcoinExchange.hpp"

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 0; 
    }
    std::ifstream in;
    get_in_file(in);
    std::map<std::string, float> data;
}