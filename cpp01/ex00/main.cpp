
#include <iostream>
#include "Zombie.hpp"

int main()
{
//	create an instance on a stack
	Zombie first("First");
	first.announce();

//	create an instance on a heap
	Zombie* rookie = newZombie("Second");
	rookie->announce();
	delete rookie;

//	create an instance on a stack and wrap it in one function
	randomChump("Random");
	return 0;
}
