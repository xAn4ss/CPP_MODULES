#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Test
{
private:
    std::string _s1;
    std::string _s2;
    std::string _infile;
    std::string _outfile;
public:
    Test(std::string s1, std::string s2, std::string in);
    ~Test();

    std::string getInfile();
    std::string getOutfile();
    void replace(std::ifstream& in, std::ofstream& out);
};


#endif