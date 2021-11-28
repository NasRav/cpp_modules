#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource( void ) :
	IMateriaSource(),
	_inventory_idx(0) {}

MateriaSource::MateriaSource( MateriaSource const &src )
{
	*this = src;
}

MateriaSource::~MateriaSource( void ) {}

MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; ++i)
			this->_inventory[i] = rhs._inventory[i];
		this->_inventory_idx = rhs._inventory_idx;
	}
	return (*this);
}

void			MateriaSource::learnMateria( AMateria *m )
{
	if (!m || this->_inventory_idx >= 4)
		return ;
	this->_inventory[this->_inventory_idx] = m;
	++this->_inventory_idx;
}

AMateria		*MateriaSource::createMateria( std::string const &type )
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	return (NULL);
}