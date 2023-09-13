
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type) {
//	_type = "unarmed";
	setType(type);
	std::cout << "Weapon was created." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon was destroyed." << std::endl;
}

const std::string &Weapon::getType() {
	const std::string &type = _type;
	std::cout << "You got it." << std::endl;
	return type;
}

void Weapon::setType(const std::string &type) {
	_type = type;
	std::cout << "Type was set." << std::endl;
}
