
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() :
	WrongAnimal() {
	_type = "wrong cat";
	std::cout << _type << " was created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) :
	WrongAnimal(other) {
	std::cout << _type << " was copyed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << _type << " was assigned with assigned operator" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << _type << " was destroyed" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << _type << " said wrong meow" << std::endl;
}
