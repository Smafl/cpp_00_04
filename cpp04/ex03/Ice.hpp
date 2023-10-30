
#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {
private:
    std::string _ice;
public:
	Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	~Ice();

	void use(ICharacter &target);
};
