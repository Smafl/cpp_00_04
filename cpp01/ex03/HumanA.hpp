
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
public:
	HumanA(const char *name, Weapon &type);
	~HumanA();
	Weapon &weapon;
	void attack();
};

#endif // HUMANA_HPP
