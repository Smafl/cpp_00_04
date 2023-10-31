
#include "../include/AMateria.hpp"
#include "../include/Character.hpp"
#include "../include/Ground.hpp"


Character::Character() :
	_name("noname") {
	for (int i = 0; i != 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const std::string &name) :
	_name(name) {
	for (int i = 0; i != 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &other) :
	_name(other._name) {
	for (int i = 0; i != 4; i++) {
		if (other._inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i != 4; i++) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
		_inventory[i] = NULL;
		if (other._inventory[i] != NULL) {
			_inventory[i] = other._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i != 4; i++) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
		_inventory[i] = NULL;
	}
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i != 4; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx] != NULL) {
		Ground::getInstance().takeMateria(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}

void Character::print_inventory() const {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL)
			std::cout << "NULL" << std::endl;
		else
			std::cout << _inventory[i]->getType() << std::endl;
	}
}
