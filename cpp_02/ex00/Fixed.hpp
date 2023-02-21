#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int _float_p;
    static const int _frac = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copied);
    Fixed& operator=(const Fixed& rval);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};



#endif