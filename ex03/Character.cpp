#include "Character.hpp"

Character::Character(void) : _name("Default"), _index(0){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
		this->_dropped[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name), _index(0){
	for (int i = 0; i < 4; i++){
		this->_inventory[i] = NULL;
		this->_dropped[i] = NULL;
	}
	std::cout << "Character parameter constructor called" << std::endl;
}

Character::Character(Character const& obj) : _name(obj._name), _index(obj._index){
	std::cout << "Copy constructor called" << std::endl;
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
		this->_inventory[i] = obj._inventory[i];
		this->_dropped[i] = obj._dropped[i];
	}
	//try copying all the array at one time!
	std::cout << "Character operator overload called" << std::endl;
	return (*this);
}

Character::~Character(void){
	std::cout << "Character deconstructor called" << std::endl;
}

void	Character::equip(AMateria* spell){
	if (this->_index >= 3){
		std::cout << "Character doesn't has space in inventory!" << std::endl;
		return ;
	}
	this->_inventory[this->_index++] = spell;
}

void	Character::unequip(int idx){
	if (idx < 0 || idx > 3){
		std::cout << "He only has 4 spaces in inventory!" << std::endl;
		return ;
	}
	this->_dropped[idx] = this->_inventory[idx];
	this->_inventory[idx] = NULL;
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
	std::cout << this->_name << " attacked " << target.getName() << " whith " << this->_inventory[idx]->getType();
}
