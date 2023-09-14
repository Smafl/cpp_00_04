
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
	public:
		HumanB(const char *name);
		~HumanB();
		Weapon *weapon;
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif // HUMANB_HPP
