
#include "HumanB.hpp"

HumanB::HumanB(const char *name) : _name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
	weapon = &weapon;
}

void HumanB::attack() {
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}