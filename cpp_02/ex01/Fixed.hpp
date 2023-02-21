#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _float_p;
    static const int _frac = 8;
public:
    Fixed();
    Fixed(const int num);
    Fixed(const float num);
    Fixed(const Fixed& copied);
    Fixed& operator=(const Fixed& rval);
    ~Fixed();
    int getRawBits(void) const;
    float toFloat(void) const;
    int toInt(void) const;
};

 std::ostream& operator<<(std::ostream& o, const Fixed& toBeOut);
#endif