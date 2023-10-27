
#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//					multiple inheritance
class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();

//	actions
	void attack(const std::string &target);
	void whoAmI();
};
