
#pragma once

#include <iostream>

class ClapTrap {
protected:
	std::string		_name;
	unsigned int	_hitPoints; // represent the health
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap();

//	actions
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//	setters
	void setAttackDamage(unsigned int damage);

//	getters
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getAttackDamage() const;
};
