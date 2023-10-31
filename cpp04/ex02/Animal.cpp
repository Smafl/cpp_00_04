
#include "Animal.hpp"
#include <iostream>

Animal::Animal() :
	_type("unknown") {
	std::cout << _type << " animal type was created" << std::endl;
}

Animal::Animal(const Animal &other) :
	_type(other._type) {
	std::cout << _type << " animal type was copyed" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
	if (this != &other)
		_type = other._type;
	std::cout << _type << " animal type was assigned with assigned operator" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << _type << " animal type was destroyed" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}

void Animal::swap(Animal &other) {
	_type.swap(other._type);
}

void Animal::makeSound() const {
	std::cout << _type << " animal type made sound" << std::endl;
}
