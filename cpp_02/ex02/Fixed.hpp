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
    void setRawBits(int raw);
    float toFloat(void) const;
    int toInt(void) const;

    bool operator>(const Fixed& rval) const;
    bool operator<(const Fixed& rval) const;
    bool operator>=(const Fixed& rval) const;
    bool operator<=(const Fixed& rval) const;
    bool operator==(const Fixed& rval) const;
    bool operator!=(const Fixed& rval) const;

    Fixed operator+(const Fixed& rval) const;
    Fixed operator-(const Fixed& rval) const;
    Fixed operator*(const Fixed& rval) const;
    Fixed operator/(const Fixed& rval) const;

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed& min(Fixed& A, Fixed& B);
    static const Fixed& min(const Fixed& A, const Fixed& b);
    static Fixed& max(Fixed& A, Fixed& B);
    static const Fixed& max(const Fixed& A, const Fixed& B);

};

 std::ostream& operator<<(std::ostream& o, const Fixed& toBeOut);
#endif