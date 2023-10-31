
#include "include/AMateria.hpp"
#include "include/MateriaSource.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"
#include "include/Character.hpp"

// void subjectTest(void)
// {
// 	std::cout << "SubjectTest start" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	std::cout << "SubjectTest end" << std::endl;
// }

// void	checkleaks(void)
// {
// 	system("leaks interface");
// }

void    test1()
{
	std::cout << "test1 start" << std::endl;
    IMateriaSource* src = new MateriaSource();
    Character* me = new Character("me");
    Character* you = new Character("you");
    Character *bob = new Character();
    AMateria* mat;
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	// dynamic_cast<MateriaSource *>(src)->print_materials();

    mat = src->createMateria("ice");
	me->equip(mat);
	mat = src->createMateria("cure");
    me->equip(mat);
	mat = src->createMateria("ice");
	me->equip(mat);
	dynamic_cast<Character *>(me)->print_inventory();
	me->use(2,*you);

    bob->equip(mat);
	// dynamic_cast<Character *>(bob)->print_inventory();
    me->use(0,*you);
	me->use(1,*you);
    bob->use(0,*you);
    *bob = *me;
    me->unequip(0);
	me->unequip(3);
	me->unequip(5);
	// dynamic_cast<Character *>(me)->print_ground();
    bob->use(0,*you);
    me->use(0,*you);
	me->use(1,*you);
	me->use(5,*you);
    delete me;
    delete you;
    delete bob;
    delete src;
	std::cout << "test1 end" << std::endl;
}

int main(void)
{
    // subjectTest();
    test1();
    // atexit(checkleaks);
    return 0;
}
