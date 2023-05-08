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
    std::list<int>::iterator it, it2;
    int result = 0;
    while (getline(s, buf, ' '))
    {
        if (buf.size() != 1)
        {
            std::cout << "ERROR: Check input." << std::endl;
            return 0;
        }
        if (isdigit(buf[0]))
        {
            data.push_back(atoi(buf.c_str()));
            // std::cout << "-----------" <<std::endl;
            // for (it = data.begin(); it != data.end(); it++)
            // {
            //     std::cout << *it << " ";
            // }
            // std::cout << std::endl;
        }
        else if (buf[0] == '+' || buf[0] == '-' || buf[0] == '*' || buf[0] == '/')
        {
            it = data.end()--;
            switch (buf[0])
            {
                case '+':
                    result = *it + *++it;
                    break;
                case '-':
                    result = *it - *++it;
                    break;
                case '*':
                    result = *it * *++it;
                    break;
                case '/':
                    result = *it / *++it;
                    break;
            }
            it = data.end();
            it--;
            it2 = data.end();
            std::cout << *--it << " " << buf[0] << " " << *--it2 << " --> " << result << std::endl;
            data.pop_back();
            data.pop_back();
            data.push_back(result);
        }
            for (it = data.begin(); it != data.end(); it++)
            {
                std::cout << *it << " ";

            }
            std::cout << std::endl;
            // std::cout << "************" <<std::endl;
            // std::cout << std::endl;    
            // std::cout << (*data.end() - 1) << " . " << *data.end() << std::endl;
    }
    std::cout << "---> " <<*data.begin()<< " / " << result << std::endl;

    return 0;
}