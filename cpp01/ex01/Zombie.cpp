
#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "New biomass has just started " \
	"to looking for a fresh brain." << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " is dead after consuming " \
	"a brain with low content of glial cells." << std::endl;
}

void Zombie::set_name(std::string &name) {
	_name = name;
}

void Zombie::announce() {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
