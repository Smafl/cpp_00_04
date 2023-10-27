
#include "ClapTrap.hpp"

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

	return 0;
}
