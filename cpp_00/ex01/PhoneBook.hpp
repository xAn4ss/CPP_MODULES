#ifndef PHONEBOOK_HPP

#define PHONOBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        int     _i;
    public:
        Contact Cont[8];
        PhoneBook();
        ~PhoneBook();
        void AddContact();
        void SearchContact();
        int  GetContact(std::string);
};




#endif