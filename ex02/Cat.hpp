#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *catBrain;

	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const& obj);
		Cat &operator=(Cat const& obj);
		virtual ~Cat(void);

		void	makeSound(void)const;
		Brain	*getBrain(void) const;
};

#endif
