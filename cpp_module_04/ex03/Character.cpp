#include "Character.hpp"

Character::Character( void ) :
	_name("default character"),
	_inventory_idx(0)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
}

Character::Character( std::string name ) :
	_name(name),
	_inventory_idx(0)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
}

Character::Character( Character const &src )
{
	*this = src;
}

Character::~Character( void ) {}

Character			&Character::operator=( Character const &rhs )
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
			this->_inventory[i] = rhs._inventory[i];
		this->_inventory_idx = rhs._inventory_idx;
	}
	return (*this);
}

std::string const	&Character::getName( void ) const
{
	return (this->_name);
}

void				Character::equip( AMateria *m )
{
	if (!m || this->_inventory_idx >= 4)
		return ;
	this->_inventory[this->_inventory_idx] = m;
	++this->_inventory_idx;
}

void				Character::unequip( int idx )
{
	if (idx < 0 || idx >= 4 || this->_inventory_idx < idx)
		return ;
	this->_inventory[idx] = NULL;
}

void				Character::use( int idx, ICharacter &target )
{
	if (idx < 0 || idx >= 4 || this->_inventory_idx < idx)
		return ;
	this->_inventory[idx]->use(target);
}
