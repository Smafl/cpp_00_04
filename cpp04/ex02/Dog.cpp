
#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	Animal(),
	_brain(new Brain()) {
	_type = "dog";
	std::cout << _type << " was created" << std::endl;
}

Dog::Dog(const Dog &other) :
	Animal(other) {
	std::cout << _type << " was copyed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
		_brain = other._brain;
	}
	std::cout << _type << " was assigned with assigned operator" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << _type << " was destroyed" << std::endl;
}

void Dog::makeSound() const {
	std::cout << _type << " said bark" << std::endl;
}
