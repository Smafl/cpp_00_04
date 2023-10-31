
#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *_materials[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	~MateriaSource();

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const &type);

	void print_materials() const;
};
