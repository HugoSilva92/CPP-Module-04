#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure"){
	// std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& obj) : AMateria(obj){
	// std::cout << "Copy constructor called" << std::endl;
}

Cure &Cure::operator=(Cure const& obj){
	// std::cout << "Overload comparison called" << std::endl;
	if (this == &obj)
		return *this;
	this->_type = obj._type;
	return *this;
}

Cure::~Cure(void){
	// std::cout << "Cure deconstructor called" << std::endl;
}

AMateria* Cure::clone(void) const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() + "'s " << "wounds *" << std::endl;
}
