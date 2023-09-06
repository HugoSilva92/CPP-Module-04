#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	diferenceAnimal(void){
	const Animal *cat = new Cat();
	const WrongAnimal *wrongCat = new WrongCat();
	WrongCat bicho("bicho");

	std::cout << cat->getType() << ": ";
	cat->makeSound();
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound();
	std::cout << bicho.getType() << ": ";
	bicho.makeSound();
	std::cout << std::endl;

	delete cat;
	delete wrongCat;
}

void	sheetTests(void){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << ": ";
	j->makeSound();
	std::cout << i->getType() << ": ";
	i->makeSound();

	meta->makeSound();

	delete meta;
	delete i;
	delete j;
}

int main()
{
	const Animal teste("bicho");
	teste.makeSound();
	sheetTests();
	std::cout << std::endl;
	diferenceAnimal();
	return 0;
}

