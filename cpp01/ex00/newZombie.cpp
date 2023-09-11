
#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* new_zo = new Zombie(name);
	return (new_zo);
}
