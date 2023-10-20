
#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) :
	_type(type) {

}

Weapon::~Weapon() {

}

const std::string &Weapon::getType() {
	const std::string &type = _type;
	return type;
}

void Weapon::setType(const std::string &type) {
	_type = type;
}
