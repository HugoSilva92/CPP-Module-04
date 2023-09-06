#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _learned(0){
	memset(this->_spells, 0, 4 * sizeof(AMateria*));
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& obj) : _learned(obj._learned){
	for (int i = 0; i < 4; i++)
		_spells[i] = obj._spells[i];
	// std::cout << "MateriaSource copy constructer called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const& obj){
	if (this == &obj)
		return *this;
	for (int i = 0; i < this->_learned; i++)
		delete _spells[i];
	this->_learned = obj._learned;
	memcpy(this->_spells, obj._spells, 4 * sizeof(AMateria*));
	return *this;
	// std::cout << "MateriaSource overload operator called" << std::endl;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < _learned; i++)
		delete _spells[i];
	// std::cout << "MateriaSource deconstructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* learn){
	if (this->_learned == 3){
		return;
	}
	this->_spells[this->_learned++] = learn;
}

AMateria* MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < this->_learned; i++){
		if (this->_spells[i]->getType() == type){
			return this->_spells[i]->clone();
		}
	}
	return (NULL);
}
