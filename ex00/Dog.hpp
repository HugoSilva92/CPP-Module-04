#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& obj);
		Dog &operator=(Dog const& obj);
		virtual ~Dog(void);

		void	makeSound()const;
};

#endif
