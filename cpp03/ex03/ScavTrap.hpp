
#pragma once

#include "ClapTrap.hpp"

//	  subclass			superclass
class ScavTrap : public virtual ClapTrap {
public:
	static const unsigned int defaultHitPoints;
	static const unsigned int defaultEnergyPoints;
	static const unsigned int defaultAttackDamage;

	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &other);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

//	actions
	void attack(const std::string &target);
	void guardGate();
};
