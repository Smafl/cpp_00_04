
#pragma once

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	~WrongAnimal();

	std::string getType() const;
	virtual void makeSound() const;
};
