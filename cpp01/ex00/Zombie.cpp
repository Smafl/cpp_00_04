
#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) {
	_name = name;
	std::cout << name << " has just started to looking for a fresh brain." << std::endl;
}
Zombie::~Zombie() {
	std::cout << _name << " is dead after consuming a brain with low content of glial cells." << std::endl;
}
void Zombie::announce() {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
