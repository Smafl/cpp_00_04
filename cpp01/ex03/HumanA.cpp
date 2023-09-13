
#include "HumanA.hpp"

HumanA::HumanA(std::string &name, Weapon &type) : _name(name) {
	std::cout << "Human A was created and get weapon " << name << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << "Human A was destroyed." << std::endl;
}

void HumanA::attack() {
	;
}
