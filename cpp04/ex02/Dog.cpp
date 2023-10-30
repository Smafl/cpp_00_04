
#include "Dog.hpp"
#include <iostream>

Dog::Dog() :
	Animal(),
	_brain(new Brain()) {
	_type = "dog";
	std::cout << _type << " was created" << std::endl;
}

Dog::Dog(const Dog &other) :
	Animal(other),
	_brain(new Brain(*other._brain)) {
	std::cout << _type << " was copyed" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		Dog new_dog(other);
		new_dog.swap(*this);
	}
	std::cout << _type << " was assigned with assigned operator" << std::endl;
	return *this;
}

Dog::~Dog() {
	delete _brain;
	std::cout << _type << " was destroyed" << std::endl;
}

void Dog::swap(Dog &dog) {
	Animal::swap(dog);
	Brain *tmp = dog._brain;
	dog._brain = _brain;
	_brain = tmp;
}

void Dog::makeSound() const {
	std::cout << _type << " said bark" << std::endl;
}
