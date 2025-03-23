#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
public:
    Fixed(const int value);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);

private:
    int fixed_point;
    static const int fractionalBits = 8;
};

#endif
