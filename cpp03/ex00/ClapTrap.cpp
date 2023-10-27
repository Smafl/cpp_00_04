
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("Noname"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0) {	}


ClapTrap::ClapTrap(std::string &name) :
	_name(name) { }

ClapTrap::~ClapTrap() { }

void ClapTrap::attack(const std::string& target);
void ClapTrap::takeDamage(unsigned int amount);
void ClapTrap::beRepaired(unsigned int amount);
