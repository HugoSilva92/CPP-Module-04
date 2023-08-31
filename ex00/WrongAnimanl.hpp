#ifndef WRONgANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string _type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& obj);
		WrongAnimal &operator=(WrongAnimal const& obj);
		~WrongAnimal(void);
};

#endif
