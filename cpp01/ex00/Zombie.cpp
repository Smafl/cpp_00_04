
#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : _name(name) {
//	we can assign a value here ↓ or use ↑ initialization list
//	_name = name;
	std::cout << _name << " has just started to looking for a fresh brain." << std::endl; // this->_name
}
Zombie::~Zombie() {
	std::cout << _name << " is dead after consuming a brain with low content of glial cells." << std::endl;
}
void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
