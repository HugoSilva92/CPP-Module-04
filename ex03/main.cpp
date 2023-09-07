#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

void	myTests(){
	{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	tmp = src->createMateria("cure");
	bob ->equip(tmp);
	bob->unequip(0);
	tmp = src->createMateria("ice");
	bob ->equip(tmp);
	bob->use(0, *me);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	bob->use(1, *me);
	tmp = src->createMateria("ice");
	bob ->equip(tmp);
	bob->use(2, *me);
	tmp = src->createMateria("cure");
	bob ->equip(tmp);
	bob->use(3, *me);
	tmp = src->createMateria("ice");
	bob ->equip(tmp);
	bob->use(4, *me);


	delete bob;
	delete me;
	delete src;
	}
	{
		MateriaSource *src = new MateriaSource();
		MateriaSource *copySrc = new MateriaSource(*src);

		Character bob;
		Character copyBob = bob;

		Cure *heal = new Cure();
		Cure *copyHeal = new Cure(*heal);

		std::cout << std::endl;
		std::cout << &heal << std::endl;
		delete heal;
		std::cout << &copyHeal << std::endl;
		std::cout << &bob << std::endl;
		std::cout << &copyBob << std::endl;
		std::cout << &src << std::endl;
		delete src;
		std::cout << &copySrc << std::endl;
		std::cout << std::endl;


		delete copySrc;
		delete copyHeal;
	}
}

void	sheetTests(void){
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

int main()
{
	sheetTests();
	std::cout << std::endl;
	myTests();
	return 0;
}
