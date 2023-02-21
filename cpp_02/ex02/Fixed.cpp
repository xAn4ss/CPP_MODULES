#include "Fixed.hpp"

Fixed::Fixed() : _float_p(0)
{
    // std::cout << "default constructor called" << std::endl;

}

Fixed::~Fixed()
{
    // std::cout << "default deconstructor called" << std::endl;
}



Fixed::Fixed(const int num) : _float_p(num << _frac)
{
    std::cout << "Int constructor called :   " << _float_p << std::endl;
}

Fixed::Fixed(const float num) : _float_p(roundf(num*(1<<_frac)))
{
    // std::cout << "Float constructor called :    " << _float_p << std::endl;
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(this->_float_p);
}

void Fixed::setRawBits(int raw)
{
    this->_float_p = raw;
}
Fixed::Fixed(const Fixed& copied)
{
    // std::cout << "copy constructor called" << std::endl;
    *this = copied;
}

Fixed& Fixed::operator=(const Fixed& rval)
{
    // std::cout << "copy assign constructor called" << std::endl;
    if (this != &rval)
    {
        this->_float_p = rval.getRawBits();
    }
    return (*this);
}

int Fixed::toInt(void) const
{
    // std::cout << "toInt member function called" << std::endl; 
    return (_float_p >> _frac);
}

float Fixed::toFloat(void) const
{
    // std::cout << "toFloat member function called" << std::endl; 
    return ((float)_float_p / (1 << _frac));
}

std::ostream& operator<<(std::ostream& o ,const Fixed& toBeOut)
{
    // std::cout << "salam" << std::endl;
    o << toBeOut.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed& rval) const
{
    return (this->toFloat() > rval.toFloat());
}

bool Fixed::operator<(const Fixed& rval) const
{
    return (this->toFloat() < rval.toFloat());
}

bool Fixed::operator>=(const Fixed& rval) const
{
    return (this->toFloat() >= rval.toFloat());
}

bool Fixed::operator<=(const Fixed& rval) const
{
    return (this->toFloat() <= rval.toFloat());
}

bool Fixed::operator==(const Fixed& rval) const
{
    return (this->toFloat() == rval.toFloat());
}

bool Fixed::operator!=(const Fixed& rval) const
{
    return (this->toFloat() != rval.toFloat());
}

Fixed Fixed::operator+(const Fixed& rval) const
{
    return (Fixed(this->toFloat()+rval.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rval) const
{
    return (Fixed(this->toFloat()-rval.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rval) const
{
    return (Fixed(this->toFloat()*rval.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rval) const
{
    return (Fixed(this->toFloat()/rval.toFloat()));
}

Fixed Fixed::operator++()
{
    ++this->_float_p;
    return (*this);
}

Fixed Fixed::operator--()
{
    --this->_float_p;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_float_p++;
    // tmp._float_p = this->_float_p++;
    return (tmp);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_float_p--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& A, Fixed& B)
{
    if (A <= B)
        return (A);
    else
        return (B);
}

const Fixed& Fixed::min(const Fixed& A, const Fixed& B)
{
    if (A < B)
        return (A);
    else
        return (B);
}

Fixed& Fixed::max(Fixed& A, Fixed& B)
{
    if (A > B)
        return (A);
    else
        return (B);
}

const Fixed& Fixed::max(const Fixed& A, const Fixed& B)
{
    if (A > B)
        return (A);
    else
        return (B);
}
