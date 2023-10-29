
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *animals[8];
	for (int i = 0; i != 4; i++) {
		animals[i] = new Cat();
	}
	for (int i = 4; i != 8; i++) {
		animals[i] = new Dog();
	}
	for (int i = 0; i != 8; i++) {
		delete animals[i];
	}
	return 0;
}
