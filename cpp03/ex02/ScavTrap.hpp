
#pragma once

#include "ClapTrap.hpp"

//	  subclass			superclass
class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

//	actions
	void attack(const std::string &target);
	void guardGate();
};
