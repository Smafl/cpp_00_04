
#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		const std::string &getType();
		static void setType(const std::string str);
};

#endif //WEAPON_HPP
