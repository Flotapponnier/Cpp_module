#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
    Fixed(const int value);
	Fixed(const float value);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
 	Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
	bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
	static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

private:
    int fixed_point;
    static const int fractionalBits = 8;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
