
#include "Zombie.hpp"

void randomChump(const std::string& name)
{
	Zombie random_zo(name);
	random_zo.announce();
}
