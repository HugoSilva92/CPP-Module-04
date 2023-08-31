#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimanl.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat const& obj);
		WrongCat &operator=(WrongCat const& obj);
		~WrongCat(void);
};

#endif
