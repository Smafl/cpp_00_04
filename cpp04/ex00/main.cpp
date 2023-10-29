
#include"Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal creature;
	// Cat cat;
	// Dog dog;

	// creature.makeSound();
	// cat.makeSound();
	// dog.makeSound();

	// WrongAnimal wa;
	// WrongCat wcat;
	// wa.makeSound();
	// wcat.makeSound();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	delete j;
	delete i;
	return 0;
}
