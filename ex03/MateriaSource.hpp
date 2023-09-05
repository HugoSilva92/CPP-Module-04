#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private:
		AMateria* spells[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const& obj);
		MateriaSource &operator=(MateriaSource const& obj);
		~MateriaSource(void);

		void	learnMateria(AMateria* learn);
		AMateria* createMateria(std::string const& type);
};

#endif
