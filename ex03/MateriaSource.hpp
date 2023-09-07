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

