#include "RPN.hpp"

int main(int ac, char ** av){

    if (ac != 2)
    {
        std::cout << "ERROR: Check arguments." << std::endl;
        return 0;
    }
    std::stringstream s(av[1]);
    std::list<int> data;
    std::string buf;
    std::list<int>::iterator it1, it2;
    int result = 0;
    while (getline(s, buf, ' '))
    {
        if (buf.size() != 1)
        {
            std::cout << buf.size() << " " << buf.data() << std::endl;
            std::cout << "ERROR: Check input." << std::endl;
            return 0;
        }
        if (isdigit(buf[0]))
        {
            data.push_back(atoi(buf.c_str()));
        }
        else if (buf[0] == '+' || buf[0] == '-' || buf[0] == '*' || buf[0] == '/')
        {
            if (data.size() != 2)
            {
                std::cout << "ERROR: Check input !!!" << std::endl;
                return 0;
            }
            it1 = data.end();
            --it1;
            it2 = it1;
            --it2;
            switch (buf[0])
            {
                case '+':
                    result = *it2 + *it1;
                    break;
                case '-':
                    result = *it2 - *it1;
                    break;
                case '*':
                    result = *it2 * *it1;
                    break;
                case '/':
                    if (*it1 == 0)
                        throw (std::exception());
                    result = *it2 / *it1;
                    break;
            }
            // std::cout << *it2 << " " << buf[0] << " " << *it1 << " --> " << result << std::endl;
            data.pop_back();
            data.pop_back();
            data.push_back(result);
        }
    }
    std::cout << "---> " <<*data.begin()<< " / " << result << std::endl;

    return 0;
}