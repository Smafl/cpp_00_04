
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() :
	_integer(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_nbr) :
	_nbr(int_nbr << _frac_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	_nbr = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl; 
	if (this == &fixed)
		return *this;
	_nbr = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return _nbr;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_nbr = raw;
}

float Fixed::toFloat() const {
	;
}

int Fixed::toInt() const {
	;
}
