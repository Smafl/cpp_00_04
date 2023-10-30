
#pragma once

#include "MateriaSource.hpp"
#include <iostream>

class ICharacter {
protected:
	std::string		_name;
	MateriaSource	_inventory[4]; // ?
	int				_slots[4]; // true/false?
public:
	ICharacter();
	ICharacter(const ICharacter &other);
	ICharacter &operator=(const ICharacter &other);
	virtual ~ICharacter();

	virtual std::string const &getName() const = 0;
	// virtual void equip(AMateria *m) = 0;
	// virtual void unequip(int idx) = 0;
	// virtual void use(int idx, ICharacter &target) = 0;
};
