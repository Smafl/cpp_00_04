
#include "include/AMateria.hpp"
#include "include/IMateriaSource.hpp"
#include "include/MateriaSource.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"
#include "include/ICharacter.hpp"
#include "include/Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	dynamic_cast<MateriaSource *>(src)->print_materials();

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	dynamic_cast<Character *>(me)->print_inventory();
	
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete me;
	delete bob;
	delete src;

	
	return 0;
}

// configuration of what it can do/produce -> materasource -> do the thing that you configured it to do
