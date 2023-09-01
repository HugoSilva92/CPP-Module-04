#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal(){
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type){
	std::cout << "WrongCat parameter constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const& obj) : WrongAnimal(obj){
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(WrongCat const& obj){
	std::cout << "WrongCat copy assignment overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "MEEEEEOOOOOOWWWWWW, not that i'm going to do anything" << std::endl;
}
