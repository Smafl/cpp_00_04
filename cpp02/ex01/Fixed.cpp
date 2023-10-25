
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_frac_bits = 8;

Fixed::Fixed() :
	_data(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_nbr) :
	_data(int_nbr << _frac_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float float_nbr) :
	_data(roundf(float_nbr * static_cast<float>(1 << _frac_bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) :
	_data(fixed._data) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl; 
	if (this == &fixed)
		return *this;
	_data = fixed._data;
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

// [---24 bits--][----8 bits-----]
// [integer part][fractional part]

/*
Integer to fixed-point.
Scale the integer: multiply the integer by a scaling factor,
which is usually 2 to the power of the number of fractional bits
in your fixed-point format. In the case of a Q8.8 format,
the scaling factor would be 256 (2^8).
Or just shift 8 ( 1 << 8 it's 256)

Float to fixed-point.
Scale the floating-point number: multiply the floating-point
number by a scaling factor, typically 2 to the power of the
number of fractional bits in your fixed-point format.
For example, for a Q8.8 format, you'd multiply by 2^8 (256)
to move the decimal point to the right.
Or multiply float by (1 << 8)

Fixed-point to integer.
Shift it back

Fixed-point to float.
Devide fixed-point by (1 << 8)
*/
