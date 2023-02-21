#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	this->_i = 0;
	this->_index = 0;
	this->_first_name = "";
	this->_last_name = "";
	this->_nickname = "";
}

Contact::~Contact(void)
{
	std::cout << "Deconstracteur" << std::endl;
}

void Contact::SetIndex(int index)
{
	this->_index = index;
}
int	Contact::SetNickname(std::string s)
{
	std::string buf;
	int c = 0;
	if (s.empty())
		return 0;
	for (int i = 0 ; s[i]; i++)
	{
		if(!isalpha(s[i]))
		{
			if (isspace(s[i]) && !c)
				continue;
			else
			{
    			std::cout << "ReEnter Nickname (inva555lid syntax):" << std::endl << ">";
				return 0;
			}
		}
	}

	if (s.length() > 10)
	{
        s = s.substr(0, 9);
        s = s.append(".");
    }
	this->_nickname = s;
	return 1;
}

int	Contact::SetDarkestSecret(std::string s)
{
	std::string buf;
	int c = 0;
	if (s.empty())
	{
    	std::cout << "ReEnter The Secret (invalid syntax):" << std::endl << ">";
		return 0;
	}
	for (int i = 0 ; s[i]; i++)
	{
		if(!isalpha(s[i]))
		{
			if (isspace(s[i]) && !c)
				continue;
			else
			{
    			std::cout << "ReEnter The Secret (invalid syntax):" << std::endl << ">";
				return 0;
			}
		}
	}

	if (s.length() > 10)
	{
        s = s.substr(0, 9);
        s = s.append(".");
    }
	this->_darkest_secret = s;
	return 1;
}

int	Contact::SetPhoneNumber(std::string s)
{
	if (s.empty())
		return 0;
	for (int i = 0 ; s[i]; i++)
	{
		if(!isdigit(s[i]))
		{
    		std::cout << "ReEnter Phone Number (invalid syntax):" << std::endl << ">";
			return 0;
		}
	}

	if (s.length() != 10)
	{
    	std::cout << "ReEnter Phone Number (invalid syntax):" << std::endl << ">";
		return 0;
    }
	this->_phone_number = s;
	return 1;
}

int	Contact::SetFirstName(std::string s)
{
	std::string buf;
	int c = 0;
	if (s.empty())
	{
    	std::cout << "ReEnter First Name (invalid syntax):" << std::endl << ">";
		return 0;
	}
	for (int i = 0 ; s[i]; i++)
	{
		if(!isalpha(s[i]))
		{
			if (isspace(s[i]) && !c)
				continue;
			else
			{
    			std::cout << "ReEnter First Name (invalid syntax):" << std::endl << ">";
				return 0;
			}
		}
	}
	if (s.length() > 10)
	{
        s = s.substr(0, 9);
        s = s.append(".");
    }
	this->_first_name = s;
	return 1;

}

int Contact::SetLastName(std::string s)
{	
	std::string buf;
	int c = 0;
	if (s.empty())
		return 0;
	for (int i = 0 ; s[i]; i++)
	{
		if(!isalpha(s[i]))
		{
			if (isspace(s[i]) && !c)
				continue;
			else
			{
    			std::cout << "ReEnter Last Name (invalid syntax):" << std::endl << ">";
				return 0;
			}
		}
	}

	if (s.length() > 10)
	{
        s = s.substr(0, 9);
        s = s.append(".");
    }
	this->_last_name = s;
	return 1;
}

std::string Contact::GetLastName()
{
	return (this->_last_name);
}

std::string Contact::GetNickname()
{
	return (this->_nickname);
}

std::string Contact::GetFirstName()
{
	return(this->_first_name);
}

int	Contact::GetIndex()
{
	return (this->_index);
}

std::string Contact::GetPhoneNumber()
{
	return (this->_phone_number);
}

std::string Contact::GetDarkestSecret()
{
	return (this->_darkest_secret);
}
