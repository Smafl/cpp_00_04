
#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "brain was created" << std::endl;
}

Brain::Brain(const Brain &other) {
	for (int i = 0; i != 10; i++) {
		_ideas[i] = other._ideas[i];
	}
	std::cout << "brain was copyed" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
	if (this != &other) {
		for (int i = 0; i != 10; i++) {
			_ideas[i] = other._ideas[i];
		}
	}
	std::cout << "brain was assigned with assigned operator" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "brain was destroyed" << std::endl;
}
