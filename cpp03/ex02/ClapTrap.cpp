
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() :
	_name("Noname"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap nameless unit was created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {
	std::cout << "ClapTrap unit was created and named as " << _name << "." << std::endl;
}
ClapTrap::ClapTrap(unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name("Noname"),
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage) {
	std::cout << "ClapTrap nameless unit was created." << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name(name),
	_hitPoints(hitPoints),
	_energyPoints(energyPoints),
	_attackDamage(attackDamage) {
	std::cout << "ClapTrap unit was created and named as " << _name << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) :
	_name(other._name),
	_hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints),
	_attackDamage(other._attackDamage) {
	std::cout << "ClapTrap " << _name << " unit was copyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " unit was assigned with assigned operator." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap unit " << _name << " was destroed." << std::endl;
}

// ACTIONS
void ClapTrap::attack(const std::string &target) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is alredy dead and cannot attack." << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " does not have enough energy to attack." << std::endl;
		return;
	}
	if (_attackDamage == 0) {
		std::cout << "ClapTrap " << _name << " is trying to attack but this amount of damage is not hirtfull." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is alredy dead and cannot take more damage." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage." << std::endl;
	if (_hitPoints >= amount)
		_hitPoints -= amount;
	else
		_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0) {
		std::cout << "ClapTrap " << _name << " is alredy dead and cannot be repaired." << std::endl;
		return;
	}
	if (_energyPoints == 0) {
		std::cout << "ClapTrap " << _name << " does not have enough energy to repaire." << std::endl;
		return;
	}
	if (_energyPoints > 0) {
		std::cout << "ClapTrap " << _name << " has repaired " << amount << " points of damage." << std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}

// SETTERS
void ClapTrap::setAttackDamage(unsigned int damage) {
	_attackDamage = damage;
}

// GETTERS
std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitPoints() const {
	return _hitPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}
