#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "const int called";
	this->fixed_point = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "const int called";
	this->fixed_point = static_cast<int>(std::roundf(value * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->fixed_point = other.fixed_point;
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const 
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->fixed_point;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixed_point = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->fixed_point) / (1 << fractionalBits);
}

int Fixed::toInt() const{
	return this->fixed_point>> fractionalBits;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}
