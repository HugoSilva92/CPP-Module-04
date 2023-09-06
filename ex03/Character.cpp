#include "Character.hpp"

Character::Character(void) : _name("Default"), _index(0){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
		this->_dropped[i] = NULL;
	}
	// std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _index(0){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
		this->_dropped[i] = NULL;
	}
	// std::cout << "Character parameter constructor called" << std::endl;
}

Character::Character(Character const& obj) : _name(obj._name), _index(obj._index){
	// std::cout << "Copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = obj._inventory[i];
		this->_dropped[i] = obj._dropped[i];
	}
}

Character &Character::operator=(Character const& obj){
	if (this == &obj)
		return *this;
	this->_name = obj._name;
	this->_index = obj._index;
	for (int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->_dropped[i])
			delete this->_dropped[i];
		this->_inventory[i] = obj._inventory[i];
		this->_dropped[i] = obj._dropped[i];
	}
	//try copying all the array at one time!
	// std::cout << "Character operator overload called" << std::endl;
	return (*this);
}

Character::~Character(void){
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		if (this->_dropped[i] != NULL)
			delete this->_dropped[i];
	}
	// std::cout << "Character deconstructor called" << std::endl;
}

void	Character::equip(AMateria* spell){
	if (this->_index > 3){
		std::cout << "Character doesn't has space in inventory!" << std::endl;
		delete spell;
		return ;
	}
	this->_inventory[this->_index] = spell;
	this->_index++;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::cout << "He only has 4 spaces in inventory!" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL)
		return ;
	this->_dropped[idx] = this->_inventory[idx];
	this->_inventory[idx] = NULL;
	std::cout << this->_name << " droped: " << this->_dropped[idx]->getType() << std::endl;
	std::cout << "The memory of the spell dropped is: " << this->_dropped[idx] << std::endl;
	this->_index--;
}

void	Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3){
		std::cout << "He only has 4 spaces in inventory!" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == NULL){
		std::cout << "He doesn't has a spell in that slot" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}

std::string const & Character::getName() const {
	return this->_name;
}

