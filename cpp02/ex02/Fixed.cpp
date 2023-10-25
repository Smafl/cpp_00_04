
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() :
	_data(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_nbr) :
	_data(int_nbr << _frac_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nbr) :
	_data(float_nbr * (1 << _frac_bits)) {
	std::cout << "Float constructor called" << std::endl;
}

// [24 bit][8 bit]
// 0 - 255
// 3 5/256
// 11 00000101
// 0 1/256
// 0  00000001

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	_data = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl; 
	if (this == &fixed)
		return *this;
	_data = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _data;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_data = raw;
}

float Fixed::toFloat() const {
	return float(_data) / (1 << _frac_bits);
}

int Fixed::toInt() const {
	return _data >> _frac_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}

// a + b
Fixed Fixed::operator+(const Fixed &b) const
{
    // 2.5 + 3.7 = 6.2
    // 2500 + 3700 = 6200
    Fixed r;
    r._data = _data + b._data;
    return r;
}
