
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	const Weapon &_weapon;
public:
	HumanA(const char *name, const Weapon &type);
	~HumanA();
	void attack();
};

#endif // HUMANA_HPP
