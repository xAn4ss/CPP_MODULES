#include "RPN.hpp"

int main(int ac, char ** av){

    if (ac != 2)
    {
        std::cout << "ERROR: Check arguments." << std::endl;
        return 0;
    }
    std::stringstream s(av[1]);
    std::stack<int> data;
    std::string buf;
    int it1, it2;
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
            data.push(atoi(buf.c_str()));
        }
        else if (buf[0] == '+' || buf[0] == '-' || buf[0] == '*' || buf[0] == '/')
        {
            std::cout << "... "  <<data.size() << std::endl;
            if (data.size() == 1)
            {
                std::cout << "ERROR: Check input !!" << std::endl;
                return 0;
            }
            it1 = data.top();
            data.pop();
            it2 = data.top();
            data.pop();
            switch (buf[0])
            {
                case '+':
                    result = it2 + it1;
                    break;
                case '-':
                    result = it2 - it1;
                    break;
                case '*':
                    result = it2 * it1;
                    break;
                case '/':
                    if (it1 == 0)
                        throw (std::exception());
                    result =it2 / it1;
                    break;
            }
            // std::cout << *it2 << " " << buf[0] << " " << *it1 << " --> " << result << std::endl;
            data.push(result);
        }
        else
        {
            std::cout << "ERROR: Check input !!!" << std::endl;
            return 0;
        }
    }
    std::cout << data.size() <<" ---> " << data.top() << " / " << result << std::endl;

    return 0;
}