
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap frank("Frank");
	frank.highFivesGuys();
	frank.attack(bob.getName());
	frank.attack(kevin.getName());
	frank.attack(assign.getName());
	frank.attack(unbob.getName());
	frank.attack(bob.getName());

	return 0;
}
