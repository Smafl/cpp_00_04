
#include "Ice.hpp"
#include <iostream>

Ice::Ice() :
	AMateria("ice") { }

Ice::Ice(const Ice &other) :
	AMateria(other) { }

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
		_ice = other._ice;
	}
	return *this;
}

Ice::~Ice() {
	// delete 
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
