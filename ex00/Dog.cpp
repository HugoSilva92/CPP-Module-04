#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type){
	std::cout << "Dog parameter constructor called" << std::endl;
}

Dog::Dog(Dog const& obj) : Animal(obj){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(Dog const& obj){
	std::cout << "Dog copy assignment overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

Dog::~Dog(void){
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "AUAUAUAUAUAUAUAUAUAUAU!" << std::endl;
}
