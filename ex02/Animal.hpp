#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

//https://www.simplilearn.com/tutorials/cpp-tutorial/abstract-class-in-cpp

class Animal{
	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const& obj);
		Animal &operator=(Animal const& obj);
		virtual ~Animal(void);

		std::string	getType(void) const ;
		void		setType(std::string type);
		virtual void		makeSound(void) const = 0; // pure virtual function
};

#endif
