
#include "HumanB.hpp"

HumanB::HumanB(const char *name) :
	_name(name) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon &type) {
	_weapon = &type;
}

void HumanB::attack() {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
