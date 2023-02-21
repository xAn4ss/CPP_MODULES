#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Contact
{
    private:
        int             _i;
        int             _index;
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nickname;
        std::string     _phone_number;
        std::string     _darkest_secret;

    public:
        Contact();
        ~Contact();
        void GetChar();
        void SetIndex(int index);
        int  SetFirstName(std::string s);
        int  SetLastName(std::string s);
        int  SetNickname(std::string s);
        int  SetPhoneNumber(std::string s);
        int  SetDarkestSecret(std::string s);
        int  GetIndex();
        std::string GetFirstName();
        std::string GetLastName();
        std::string GetNickname();
        std::string GetPhoneNumber();
        std::string GetDarkestSecret();
};

#endif