#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain default constructor called" << std::endl;
	std::string ideas[] = {
		"Hello Master",
		"Can we take a walk?",
		"I need to use the toilet!",
		"Give me my FOOD!!",
		"I'm thirsty!",
		"A cuddle would be nice!",
		"Leave me alone",
	};
	long unsigned int x = 0;
	for(int i = 0; i < 100; i++){
		if (x == 7)
			x = 0;
		this->_ideas[i] = ideas[x];
		x++;
	}
}

Brain::Brain(Brain const& obj){
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain	&Brain::operator=(Brain const& obj){
	std::cout << "Brain copy assignment overload operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];

	return *this;
}

Brain::~Brain(){
	std::cout << "Brain deconstructor called" << std::endl;
}
