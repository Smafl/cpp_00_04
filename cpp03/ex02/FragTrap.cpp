
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() :
	ClapTrap(100, 50, 20) {
	std::cout << "FragTrap nameless unit was created." << std::endl;
}

FragTrap::FragTrap(const std::string &name) :
	ClapTrap(name, 100, 50, 20) {
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
void FragTrap::attack(const std::string &target) {
	if (_hitPoints == 0) {
		std::cout << "FragTrap " << _name << " is alredy dead and cannot attack." << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "FragTrap " << _name << " does not have enough energy to attack." << std::endl;
		return;
	}
	if (_attackDamage == 0) {
		std::cout << "FragTrap " << _name << " is trying to attack but this amount of damage is not hirtfull." << std::endl;
		return;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << _name << " unit has given hign fives to guys." << std::endl;
}
