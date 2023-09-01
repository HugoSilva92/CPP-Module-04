#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *dogBrain;

	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const& obj);
		Dog &operator=(Dog const& obj);
		virtual ~Dog(void);

		void	makeSound()const;
		Brain*	getBrain(void);
};

#endif
