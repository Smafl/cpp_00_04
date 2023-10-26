
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() :
	_data(0) { }

Fixed::Fixed(const int int_nbr) :
	_data(int_nbr << _frac_bits) { }

Fixed::Fixed(const float float_nbr) :
	_data(float_nbr * (1 << _frac_bits)) { }

Fixed::~Fixed() { }

Fixed::Fixed(const Fixed &fixed) :
	_data(fixed._data) { }

Fixed &Fixed::operator=(const Fixed &fixed) {
	if (this == &fixed)
		return *this;
	_data = fixed._data;
	return *this;
}

// GETTER/SETTER
int Fixed::getRawBits() const {
	return _data;
}

void Fixed::setRawBits(int const raw) {
	_data = raw;
}

// CONVERTION
float Fixed::toFloat() const {
	return float(_data) / (1 << _frac_bits);
}

int Fixed::toInt() const {
	return _data >> _frac_bits;
}

// COMPARISON OPERATORS
bool Fixed::operator>(const Fixed &a) const {
	return _data > a._data;
}
bool Fixed::operator<(const Fixed &a) const {
	return _data < a._data;
}
bool Fixed::operator>=(const Fixed &a) const {
	return _data >= a._data;
}
bool Fixed::operator<=(const Fixed &a) const {
	return _data <= a._data;
}
bool Fixed::operator==(const Fixed &a) const {
	return _data == a._data;
}
bool Fixed::operator!=(const Fixed &a) const {
	return _data != a._data;
}

// ARITHMETIC OPERATORS
Fixed Fixed::operator+(const Fixed &a) const
{
	Fixed r;
	r._data = _data + a._data;
	return r;
}

Fixed Fixed::operator-(const Fixed &a) const {
	Fixed r;
	r._data = _data - a._data;
	return r;
}

Fixed Fixed::operator*(const Fixed &a) const {
	Fixed r;
	r._data = static_cast<float>((static_cast<long>(_data) * static_cast<long>(a._data)) >> _frac_bits);
	return r;
}

Fixed Fixed::operator/(const Fixed &a) const {
	Fixed r;
	r._data = (static_cast<long>(_data << _frac_bits) / static_cast<long>(a._data));
	return r;
}

// INCREMENT/DECREMENT OPERATORS
// (pre-increment and post-increment,
// pre-decrement and post-decrement)
Fixed &Fixed::operator++() {
	++_data;
	return *this;
}

Fixed &Fixed::operator--() {
	--_data;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed f(*this);
	++_data;
	return f;
}

Fixed Fixed::operator--(int) {
	Fixed f(*this);
	--_data;
	return f;
}

// MIN/MAX
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a._data < b._data)
		return a;
	return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	if (a._data < b._data)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a._data > b._data)
		return a;
	return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	if (a._data > b._data)
		return a;
	return b;
}

// stream
std::ostream &operator<<(std::ostream &out, const Fixed &f) {
	out << f.toFloat();
	return out;
}
