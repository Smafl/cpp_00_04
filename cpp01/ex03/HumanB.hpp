
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	const Weapon *_weapon;
public:
	HumanB(const char *name);
	~HumanB();
	void setWeapon(const Weapon &type);
	void attack();
};

#endif // HUMANB_HPP
