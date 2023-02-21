#include "replace.hpp"

Test::Test(std::string s1, std::string s2, std::string in) : _s2(s2), _infile(in)
{
    if (s1.empty())
    {
        std::cout << "apppaaah" << std::endl;
        return;
    }
    this->_s1 = s1;
    this->_outfile = this->_infile + ".replace";
}

Test::~Test()
{
}

// void Test::replace(std::string s1, std::string s2){
//     (void)s1;
//     (void)s2;
// }

std::string Test::getInfile()
{
    return (this->_infile);
}

std::string Test::getOutfile()
{
    return (this->_outfile);
}

void Test::replace(std::ifstream &in, std::ofstream &out)
{
    std::string line;
    while (getline(in, line))
    {
    size_t i = 0;
        std::string replace;
        while ((i = line.find(this->_s1, i)) != std::string::npos)
        {
            replace += line.substr(0, i) + this->_s2;
            std::cout << "-" << "-" << replace<< std::endl;
            i += this->_s1.length();
            line = line.substr(i);
            std::cout << "<" << ">" << line<< std::endl;
            i = 0;
        }
        replace += line;
            std::cout << "*" << "*" << replace<< std::endl;
        out << replace << std::endl;
    }
}
