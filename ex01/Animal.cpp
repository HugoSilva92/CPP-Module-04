#include "Animal.hpp"

Animal::Animal(void) : _type("Animal"){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
	std::cout << "Animal parameter constructor called" << std::endl;
}

Animal::Animal(Animal const& obj){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(Animal const& obj){
	std::cout << "Animal copy assignment overload called" << std::endl;
	this->_type = obj._type;
	return *this;
}

Animal::~Animal(void){
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const {
	return this->_type;
}

void	Animal::setType(std::string type){
	this->_type = type;
}

void		Animal::makeSound(void) const {
	std::cout << "Random noises" << std::endl;
}
