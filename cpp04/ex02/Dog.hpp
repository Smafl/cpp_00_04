
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void swap(Dog &dog);
	void makeSound() const;
};
