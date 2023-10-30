
#pragma once

#include "ICharacter"
#include <iostream>

class Character : public ICharacter {
public:
	Character();
	Character(const std::string &name);
	Character(const Character &other);
	Character &operator=(const Character &other);
	virtual ~Character();

	std::string const &getName() const;
	// virtual void equip(AMateria *m);
	// virtual void unequip(int idx);
	// virtual void use(int idx, Character &target);
};
