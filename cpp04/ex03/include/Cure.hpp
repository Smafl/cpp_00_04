
#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {
private:
    std::string _cure;
public:
	Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	~Cure();

	AMateria *clone() const;
	void use(ICharacter &target);
};