
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	std::string		_name;
	unsigned int	_hitPoints; // represent the health
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	~ClapTrap();

//	actions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

//	setters
	void setAttackDamage(unsigned int damage);

//	getters
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getAttackDamage() const;
};

#endif // CLAPTRAP_HPP
