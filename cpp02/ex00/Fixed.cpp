
#include "Fixed.hpp"
#include <iostream>

const int Fixed::_frac_bits = 8;

Fixed::Fixed() :
	_data(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
//	A copy constructor is a constructor which can be called
//	with an argument of the same class type and copies the
//	content of the argument without mutating the argument

// The purpose of the copy constructor and the copy assignment operator
// are almost equivalent -- both copy one object to another. However,
// the copy constructor initializes new objects, whereas
// the assignment operator replaces the contents of existing objects
Fixed::Fixed(const Fixed &fixed) :
//	_data(fixed._data) {			// how recommended
	_data(fixed.getRawBits()) {		// according subject
	std::cout << "Copy constructor called" << std::endl;
}

// // copy assigned operator copy values from one object to another already existing object
// // it returns a reference to the object that was just modified
// // it allows to do multiple assignments in a single line: obj1 = obj2 = obj3;
Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl; 
	if (this == &fixed)
		return *this;
//	_data = fixed._data;			// how recommended
	_data = fixed.getRawBits();		// according subject
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
