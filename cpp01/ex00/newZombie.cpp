
#include "Zombie.hpp"

Zombie* newZombie(const std::string &name)
{
	Zombie* new_zo = new Zombie(name);
	return new_zo;
}
