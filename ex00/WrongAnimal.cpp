#include "WrongAnimanl.hpp"

WrongAnimal::WrongAnimal(void) : _type("default"){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
	std::cout << "WrongAnimal parameter constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& obj){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const& obj){
	std::cout << "WrongAnimal copy assignment overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal destructor called" << std::endl;
}
