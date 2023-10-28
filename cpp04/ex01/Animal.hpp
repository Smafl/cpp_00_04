
#pragma once

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	~Animal();

	std::string getType() const;
	virtual void makeSound() const;
};
