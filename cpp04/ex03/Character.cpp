
#include "Character.hpp"

Character::Character() :
	_name("noname") { }

Character::Character(const std::string &name) :
	_name(name) { }

Character::Character(const Character &other);
Character &Character::operator=(const Character &other);

Character::~Character() { }

std::string const &Character::getName() const {
	return _name;
}
