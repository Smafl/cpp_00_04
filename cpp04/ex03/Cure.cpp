
#include "Cure.hpp"
#include <iostream>

Cure::Cure() :
	AMateria("cure") { }

Cure::Cure(const Cure &other) :
	AMateria(other) { }

Cure &Cure::operator=(const Cure &other) {
	if (this != &other) {
		AMateria::operator=(other);
		_cure = other._cure;
	}
	return *this;
}

Cure::~Cure() {
	// delete 
}
