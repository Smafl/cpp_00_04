
#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
public:
	static const unsigned int defaultHitPoints;
	static const unsigned int defaultEnergyPoints;
	static const unsigned int defaultAttackDamage;

	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

//	actions
	void highFivesGuys();
};
