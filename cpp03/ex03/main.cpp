
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap pedro("Pedro");
	FragTrap martin("Martin");
	pedro.attack(martin.getName());
	martin.takeDamage(pedro.getAttackDamage());
	pedro.setAttackDamage(80);
	pedro.attack(martin.getName());
	martin.takeDamage(pedro.getAttackDamage());
	martin.beRepaired(10);
	DiamondTrap crap;
	crap = pedro;
	crap.whoAmI();
	return 0;
}
