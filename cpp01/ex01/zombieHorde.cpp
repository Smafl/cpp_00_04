
#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name) {
	if (N <= 0) {
		std::cout << "No valid biomaterial to create a zombie." << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[N]; // array which was created with new operator can't take parameters
	for (int i = 0; i != N; i++) {
		horde[i].set_name(name);
	}
	return horde;
}
