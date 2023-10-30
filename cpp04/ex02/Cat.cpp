
#include "Cat.hpp"
#include <iostream>

Cat::Cat() :
	Animal(),
	_brain(new Brain()) {
	_type = "cat";
	std::cout << _type << " was created" << std::endl;
}

Cat::Cat(const Cat &other) :
	Animal(other),
	_brain(new Brain(*other._brain)) {
	std::cout << _type << " was copyed" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		Cat new_cat(other);
		swap(new_cat);
	}
	std::cout << _type << " was assigned with assigned operator" << std::endl;
	return *this;
}

Cat::~Cat() {
	delete _brain;
	std::cout << _type << " was destroyed" << std::endl;
}

void Cat::swap(Cat &cat) {
	Animal::swap(cat);
	Brain *tmp = cat._brain;
	cat._brain = _brain;
	_brain = tmp;
}

void Cat::makeSound() const {
	std::cout << _type << " said meow" << std::endl;
}
