
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
//	attributes
	std::string _name;
public:
//	constructor
	explicit Zombie(const std::string &name);
//	destructor
	~Zombie();
	void announce();
};

Zombie* newZombie(const std::string &name);
void    randomChump(const std::string &name);

#endif // ZOMBIE_HPP

/*
Constructor and destructor don't have a return type.
*/
