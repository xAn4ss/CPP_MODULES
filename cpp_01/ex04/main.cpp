#include "replace.hpp"

int main(int ac, char **av)
{
    if ( ac != 4)
    {
        std::cout << "Error" << std::endl << av[0] << " <filename> <s1> <s2>"
        << std::endl;
        return 0;
    }
    Test file = Test(av[2], av[3], av[1]);
    std::ifstream in(file.getInfile().c_str());
    if (in.is_open() == 0)
    {
        std::cerr << "Error: Could not open input file " << std::endl;
        return 1;
    }
    std::ofstream out(file.getOutfile().c_str());
    if (out.is_open() == 0)
    {
        std::cerr << "Error: Could not open output file "<< std::endl;
        return 1;
    }
    file.replace(in, out);
    in.close();
    out.close();

    return 0;
}