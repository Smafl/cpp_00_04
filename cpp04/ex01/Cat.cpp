
#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	Animal(),
	_brain(new Brain()) {
	_type = "cat";
	std::cout << _type << " was created" << std::endl;
}

Cat::Cat(const Cat &other) :
	Animal(other) {
	std::cout << _type << " was copyed" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
		_brain = other._brain;
	}
	std::cout << _type << " was assigned with assigned operator" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << _type << " was destroyed" << std::endl;
}

void Cat::makeSound() const {
	std::cout << _type << " said meow" << std::endl;
}
