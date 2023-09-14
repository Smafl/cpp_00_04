
#include "HumanA.hpp"

HumanA::HumanA(const char *name, Weapon &type) : _name(name), weapon(type) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << _name << " attacks with their " << weapon.getType() << std::endl;
}
