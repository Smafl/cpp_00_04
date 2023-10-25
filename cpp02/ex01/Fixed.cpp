
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

// 10 * 2^8 = 10 << 8
// 2  * 2^8 = 2 << 8 = 512 = 2 ^ 9
// 1  * 2^8 = 1 << 8 = 2^8
Fixed::Fixed(const float float_nbr) :
	_data(float_nbr * (1 << _frac_bits)) {
	std::cout << "Float constructor called" << std::endl;
}

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
