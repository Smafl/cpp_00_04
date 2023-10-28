
#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() :
	_type("unknown") {
	std::cout << _type << " wrong animal type was created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) :
	_type(other._type) {
	std::cout << _type << " wrong animal type was copyed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << _type << " wrong animal type was assigned with assigned operator" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << _type << " wrong animal type was destroyed" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << _type << " wrong animal type made wrong sound" << std::endl;
}
