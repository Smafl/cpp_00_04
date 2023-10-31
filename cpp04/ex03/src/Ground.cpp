
#include "../include/Ground.hpp"

Ground::Ground() :
	_counter(0) {
	for (int i = 0; i != 50; i++)
		_array[i] = NULL;
}

Ground::~Ground() {
	for (unsigned int i = 0; i != _counter; i++)
		delete _array[i];
}

void Ground::takeMateria(AMateria *m) {
	_array[_counter] = m;
	_counter++;
}

Ground &Ground::getInstance() {
	static Ground ground;
	return ground;
}
