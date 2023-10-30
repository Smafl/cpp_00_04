
#pragma once

#include <iostream>

// an abstract class is a class that is designed to be specifically used as a base class
// an abstract class contains at least one pure virtual function
// you declare a pure virtual function by using a pure specifier (= 0)
class Animal {
protected:
	std::string _type;
public:
//	constructor cannot be virtual because it's called for class (not for object)
	Animal();
	Animal(const Animal &other);

//	copy assignment operator is not declared as virtual because
//	it's generally not overridden in derived classes
	Animal &operator=(const Animal &other);

//	has to be virtual and always public
	virtual ~Animal();

//	cannot be pure because realisation is here
	std::string getType() const;

	void swap(Animal &other);
//	pure virtual (realisation in derived classes)
	virtual void makeSound() const = 0;
};

// you cannot use an abstract class as a parameter type,
// a function return type, or the type of an explicit conversion

// you cannot declare an object of an abstract class
// but you can declare pointers and references to an abstract class

// virtual member functions are inherited
// a class derived from an abstract base class will also be abstract
// unless you override each pure virtual function in the derived class

// you can call member functions from a constructor or destructor
// of an abstract class. However, the results of calling
// (directly or indirectly) a pure virtual function from its
// constructor are undefined

// pure virtual should be function(s) which doesn't have
// realisation here
