
#include <iostream>
#include "Zombie.hpp"

int main()
{
	Zombie first("First");
	first.announce();

	Zombie* rookie = newZombie("Second");
	rookie->announce();
	delete rookie;

	randomChump("Random");
	return 0;
}
