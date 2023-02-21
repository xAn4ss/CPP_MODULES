#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::_debug()
{
    std::cout << "debugii mea krk" << std::endl;
}

void Harl::_info()
{
    std::cout << "infoor" << std::endl;
}

void Harl::_warning()
{
    std::cout << "indaaaar" << std::endl;
}

void Harl::_error()
{
    std::cout << "egheueuegh" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string functionArray[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    void (Harl::*funct[4])() = {
    &Harl::_debug,
    &Harl::_info,
    &Harl::_warning,
    &Harl::_error
    };

    for (int i = 0; i < 4; i++)
    {
        if (functionArray[i].compare(level) == 0)
        {
            (this->*(funct[i]))();
            return;
        }
    }
    std::cerr << "inexistant level" << std::endl;
}