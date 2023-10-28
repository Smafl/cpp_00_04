
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

const unsigned int FragTrap::defaultHitPoints = 100;
const unsigned int FragTrap::defaultEnergyPoints = 50;
const unsigned int FragTrap::defaultAttackDamage = 20;

FragTrap::FragTrap() :
	ClapTrap(FragTrap::defaultHitPoints, FragTrap::defaultEnergyPoints, FragTrap::defaultAttackDamage) {
	std::cout << "FragTrap nameless unit was created." << std::endl;
}

FragTrap::FragTrap(const std::string &name) :
	ClapTrap(name, FragTrap::defaultHitPoints, FragTrap::defaultHitPoints, FragTrap::defaultAttackDamage) {
	std::cout << "FragTrap unit was created and named as " << _name << "." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) :
	ClapTrap(other) {
	std::cout << "FragTrap " << _name << " unit was copyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap " << _name << " unit was assigned with assigned operator." << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap unit " << _name << " was destroyed." << std::endl;
}

// ACTIONS
void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " unit has given hign fives to guys." << std::endl;
}
