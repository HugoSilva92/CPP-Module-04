#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

//This exercise talks about sub-type polymorphism, the real difference between Animal and WrongAnimal
//	is just the virtual mechanism. Where the compiler overides the makeSound()
//https://www.geeksforgeeks.org/virtual-function-cpp/

class Animal{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& obj);
		Animal &operator=(Animal const& obj);
		virtual ~Animal(void);					//https://www.geeksforgeeks.org/virtual-destructor/
												//the same for the derived classes.
		std::string	getType(void) const ;
		void		setType(std::string type);
		virtual void		makeSound(void) const ;
};

#endif
