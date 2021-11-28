#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character( void );
	Character( std::string name );
	Character( Character const &src );
	virtual ~Character( void );

	Character			&operator=( Character const &rhs );
	
	std::string const	&getName( void ) const;
	void				equip( AMateria *m );
	void				unequip( int idx );
	void				use( int idx, ICharacter &target );

private:
	std::string			_name;
	AMateria			*_inventory[4];
	int					_inventory_idx;
};

#endif
