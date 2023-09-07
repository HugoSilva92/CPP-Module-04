#include "Cat.hpp"

Cat::Cat(void) : Animal(){
	this->_type = "Cat";
	this->catBrain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type){
	this->catBrain = new Brain();
	std::cout << "Cat parameter constructor called" << std::endl;
}

Cat::Cat(Cat const& obj) : Animal(obj){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(Cat const& obj){
	std::cout << "Cat copy assignment overload called" << std::endl;
	this->_type = obj._type;
	this->catBrain = new Brain(*obj.catBrain);
	return *this;
}

Cat::~Cat(void){
	delete this->catBrain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "MEEEOOOOWWWW!" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return this->catBrain;
}
