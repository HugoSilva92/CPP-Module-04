#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Default"){
	// std::cout << "Materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type){
	// std::cout << "Materia parameter constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & obj) : _type(obj._type){
	// std::cout << "Materia copy constructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const & obj){
	// std::cout << "Materia operator overload called" << std::endl;
	if (this == &obj)
		return *this;
	this->_type = obj._type;
	return *this;
}

AMateria::~AMateria(void){
	// std::cout << "Materia destroyed" << std::endl;
}

std::string	const& AMateria::getType() const {
	return this->_type;
}


void AMateria::use(ICharacter& target){
	std::cout << "Attacked " << target.getName() << std::endl;
}
