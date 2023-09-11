
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	Zombie(const std::string name);
	~Zombie();
	void announce();
};

Zombie* newZombie( std::string name );

#endif // ZOMBIE_HPP
