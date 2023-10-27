
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() :
	ClapTrap(100, 50, 20) {
	std::cout << "ScavTrap nameless unit was created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) :
	ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap unit was created and named as " << _name << "." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) :
	ClapTrap(other) {
	std::cout << "ScavTrap " << _name << " unit was copyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap " << _name << " unit was assigned with assigned operator." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap unit " << _name << " was destroed." << std::endl;
}

// ACTIONS
void ScavTrap::attack(const std::string &target) {
	if (_hitPoints == 0) {
		std::cout << "ScavTrap " << _name << " is alredy dead and cannot attack." << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "ScavTrap " << _name << " does not have enough energy to attack." << std::endl;
		return;
	}
	if (_attackDamage == 0) {
		std::cout << "ScavTrap " << _name << " is trying to attack but this amount of damage is not hirtfull." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
