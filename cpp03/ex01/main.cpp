
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	bob.setAttackDamage(3);
	ClapTrap unbob;
	bob.attack(unbob.getName());
	unbob.takeDamage(bob.getAttackDamage());
	unbob.takeDamage(bob.getAttackDamage());
	unbob.takeDamage(bob.getAttackDamage());
	unbob.takeDamage(bob.getAttackDamage());
	unbob.beRepaired(bob.getAttackDamage());
	ClapTrap copy(bob);
	ClapTrap assign;
	assign = unbob;
	ScavTrap kevin;
	kevin.attack(unbob.getName());
	ScavTrap biber("Biber");
	biber.attack(kevin.getName());
	kevin.beRepaired(biber.getAttackDamage());
	kevin.guardGate();

	return 0;
}
