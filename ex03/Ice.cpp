#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice"){
	// std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const& obj) : AMateria(obj){
	// std::cout << "Ice Copy constructor called" << std::endl;
}

Ice &Ice::operator=(Ice const& obj){
	// std::cout << "Ice Overload operator called" << std::endl;
	if (this == &obj)
		return *this;
	this->_type = obj._type;
	return *this;
}

Ice::~Ice(void){
	// std::cout << "Ice deconstructor called" << std::endl;
}

AMateria* Ice::clone(void) const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() + " *" << std::endl;
}
