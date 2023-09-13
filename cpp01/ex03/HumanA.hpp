
#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA : public Weapon {
	private:
		std::string _name;
	public:
		Weapon &weapon;
		HumanA(std::string &name, Weapon &type);
		~HumanA();
		void attack();
};

#endif // HUMANA_HPP
