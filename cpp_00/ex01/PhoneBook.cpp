#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_i = 0;
    std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook deconstructor called" << std::endl;
}


void	print_menu(void)
{
	std::cout << "CHOOSE UR ACTION :)" << std::endl
	<< "- Search -" << std::endl << "- Add -" << std::endl
	<< "- Exit -" << std::endl << std::endl << ">>";
}

void assign_num()
{

}

void    PhoneBook::AddContact()
{

    std::string  buf;
    this->_i = this->_i % 8;
    this->Cont[this->_i].SetIndex(this->_i);
    std::cout << "Enter  First Name:" << std::endl << ">";
    while (getline(std::cin, buf) && std::cin.good())
    {
        if(Cont[this->_i].SetFirstName(buf) == 1)
            break;
    }
    std::cout << "Enter Last Name:" << std::endl << ">";
    while (getline(std::cin, buf))
    {
        if(this->Cont[this->_i].SetLastName(buf) == 1)
            break;
    }
    std::cout << "Enter Nickname:" << std::endl << ">";
    while(getline(std::cin, buf))
    {
        if(this->Cont[this->_i].SetNickname(buf) == 1)
            break;
    }
    std::cout << "Enter Phone Number:" << std::endl << ">";
    while (getline(std::cin, buf))
    {
        if(this->Cont[this->_i].SetPhoneNumber(buf) == 1)
            break;
    }
    std::cout << "Enter Darkest secret:" << std::endl << ">";
    while (getline(std::cin, buf))
    {
        if(this->Cont[this->_i].SetDarkestSecret(buf) == 1)
            break;
    }
    this->_i++;
}

void PhoneBook::SearchContact()
{
    int i = 0;
    std::string buf;
    if (this->Cont[i].GetFirstName().empty())
    {
        std::cout<< "No Contacts were found" << std::endl << ">";
        return;
    }
    std::cout << "  INDEX   |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
    while(!this->Cont[i].GetFirstName().empty())
    {
        std::cout << this->Cont[i].GetIndex() + 1<< std::setw(10) << "|"
        << this->Cont[i].GetFirstName() << std::setw(11 - this->Cont[i].GetFirstName().size() ) <<"|" << 
        this->Cont[i].GetLastName() << std::setw(11 - this->Cont[i].GetLastName().size()) << "|" <<
        this->Cont[i].GetNickname() << std::endl;
        i++;
    }
    std::cout << "Enter Contact Index :"<< std::endl << ">";
    while (getline(std::cin, buf))
    {
        if (PhoneBook::GetContact(buf) == 1)
            break;
    }
}

int PhoneBook::GetContact(std::string s)
{
    if (s.empty())
    {
    	std::cout << "ReEnter Contact Index:" << std::endl << ">";
        return (0);
    }
    for (int i = 0; s[i]; i++)
    {
        if (!isdigit(s[i]))
        {
    	    std::cout << "ReEnter Contact Index (wrong syntax):" << std::endl << ">";
            return (0);
        }
    }
    int i = atoi((char*)s.c_str());
    if (i > 8 ||i < 1)
    {
        std::cout << "ReEnter Contact Index(1...8):" << std::endl << ">";
        return (0);
    }
    if (this->Cont[i-1].GetFirstName().empty())
    {
        std::cout << "ReEnter Contact Index(not found):" << std::endl << ">";
        return (0);   
    }
    std::cout << "Index         : " << this->Cont[i-1].GetIndex() + 1 <<
    std::endl << "First Name    : " << this->Cont[i-1].GetFirstName() <<
    std::endl << "Last Name     : " << this->Cont[i-1].GetLastName() <<
    std::endl << "Nickname      : " << this->Cont[i-1].GetNickname() <<
    std::endl << "Phone Number  : " << this->Cont[i-1].GetPhoneNumber() <<
    std::endl << "Darkst Secret : " <<this->Cont[i-1].GetDarkestSecret() << 
    std::endl << std::endl;
    return (1);
}

int main()
{
    PhoneBook tt;
    std::string buf = "";

    print_menu();
    while (getline(std::cin, buf))
    {
        if (!buf.compare("SEARCH"))
        {
            std::cout << "SEARCH" << std::endl;
            tt.SearchContact();
            // search fct
        }
        else if (!buf.compare("ADD"))
        {
            std::cout << "ADD" << std::endl;
            tt.AddContact();
            // PhoneBook::AddContact()
            // add
        }
        else if (!buf.compare("EXIT"))
        {
            std::cout << "EXIT" << std::endl;
            exit(1);
        }
        else
        {
            std::cout << "wrong input, try again" << std::endl << ">>";
        }

        print_menu();
    }
}