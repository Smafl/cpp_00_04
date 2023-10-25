
#include "HumanB.hpp"

HumanB::HumanB(const char *name) :
	_name(name),
	_weapon(0) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(const Weapon &type) {
	_weapon = &type;
}

void HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
