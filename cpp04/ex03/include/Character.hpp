
#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter {
private:
	std::string		_name;
	AMateria		*_inventory[4];
	// unsigned int	_capacity;
	// unsigned int	_size;
	// AMateria		*_ground[1];
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character &operator=(const Character &other);
	virtual ~Character();

	std::string const &getName() const;
	void equip(AMateria *m);
	// void unequip(int idx);
	void use(int idx, ICharacter &target);
	void print_inventory() const;
};
