
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string _name;
public:
	explicit Zombie(const std::string& name);
	~Zombie();
	void announce();
};

Zombie* newZombie( const std::string& name );
void    randomChump(const std::string& name);

#endif // ZOMBIE_HPP
