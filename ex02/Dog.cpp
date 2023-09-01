#include "Dog.hpp"

Dog::Dog(void) : Animal(){
	this->_type = "Dog";
	this->dogBrain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type){
	this->dogBrain = new Brain();
	std::cout << "Dog parameter constructor called" << std::endl;
}

Dog::Dog(Dog const& obj) : Animal(obj){
	std::cout << "Dog copy constructor called" << std::endl;
	//this->dogBrain = NULL;
	*this = obj;
}

Dog &Dog::operator=(Dog const& obj){
	std::cout << "Dog copy assignment overload called" << std::endl;
	this->_type = obj._type;
	//delete this->dogBrain;
	this->dogBrain = new Brain(*obj.dogBrain);
	return *this;
}

Dog::~Dog(void){
	delete this->dogBrain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "AUAUAUAUAUAUAUAUAUAUAU!" << std::endl;
}

Brain* Dog::getBrain(void){
	return this->dogBrain;
}
