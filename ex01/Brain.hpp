#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	private:
		std::string _ideas[100];
	public:
		Brain(void);
		Brain(Brain const& obj);
		Brain &operator=(Brain const& obj);
		~Brain();
};




#endif
