
#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i != 4; i++) {
		_materials[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	for (int i = 0; i != 4; i++) {
		if (_materials[i] != NULL) {
			delete _materials[i];
			_materials[i] = other._materials[i]->clone();
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return *this;
	for (int i = 0; i != 4; i++) {
		if (_materials[i] != NULL) {
			delete _materials[i];
			_materials[i] = other._materials[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i != 4; i++) {
		if (_materials[i] != NULL) {
			delete _materials[i];
			_materials[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i != 4; i++) {
		if (_materials[i] == NULL) {
			_materials[i] = m;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i != 4; i++) {
		if (_materials[i] != NULL && _materials[i]->getType() == type)
			return _materials[i]->clone();
	}
	return NULL;
}

void MateriaSource::print_materials() const {
	for (int i = 0; i < 4; i++) {
		if (_materials[i] == NULL)
			std::cout << "NULL" << std::endl;
		else
			std::cout << _materials[i]->getType() << std::endl;
	}
}
