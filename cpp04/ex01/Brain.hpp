
#pragma once

#include <iostream>

class Brain {
protected:
	std::string _ideas[10];
public:
	Brain();
	Brain(const Brain &other);
	Brain &operator=(const Brain &other);
	~Brain();
};