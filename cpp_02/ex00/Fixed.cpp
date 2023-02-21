#include "Fixed.hpp"

Fixed::Fixed() : _float_p(0)
{
    std::cout << "default constructor called" << std::endl;

}

Fixed::~Fixed()
{
    std::cout << "default deconstructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copied)
{
    std::cout << "copy constructor called" << std::endl;

    *this = copied;
}

Fixed& Fixed::operator=(const Fixed& rval)
{
    std::cout << "copy assignement operator called" << std::endl;
    if (this != &rval)
    {
        this->_float_p = rval.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->_float_p);
}

void Fixed::setRawBits(int const raw)
{
    this->_float_p = raw;
}