#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria* _inventory[4];
		AMateria* _dropped[4];
		int		_index;

	public:
		Character(void);
		Character(std::string name);
		Character(Character const& obj);
		Character &operator=(Character const& obj);
		~Character(void);

		void	equip(AMateria* spell);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
};

#endif
