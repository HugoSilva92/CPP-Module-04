#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <cstring>

class MateriaSource : public IMateriaSource{
	private:
		AMateria* _spells[4];
		int		_learned;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& obj);
		MateriaSource &operator=(MateriaSource const& obj);
		~MateriaSource(void);

		void	learnMateria(AMateria* learn);
		AMateria* createMateria(std::string const& type);
};

#endif


/* MateriaSource::MateriaSource(void) : _learned(0){
	memset(this->_spells, 0, sizeof(this->_spells));
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
	memcpy(this->_spells, obj._spells, sizeof(this->_spells));
	return *this;
	// std::cout << "MateriaSource overload operator called" << std::endl;
}

MateriaSource::~MateriaSource(void){
	// std::cout << "MateriaSource deconstructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* learn){
	if (this->_learned == 3)
		return;
	this->_spells[this->_learned++] = learn;
}

AMateria* MateriaSource::createMateria(std::string const& type){
	for (int i = 0; i < this->_learned; i++){
		if (this->_spells[i]->getType() == type){
			return this->_spells[i];
		}
	}
	return (NULL);
} */
