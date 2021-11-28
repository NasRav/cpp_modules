#include "AMateria.hpp"

AMateria::AMateria( void ) :
	_type("default AMateria") {}

AMateria::AMateria( std::string const &type ) :
	_type(type) {}

AMateria::AMateria( AMateria const &src )
{
	*this = src;
}

AMateria::~AMateria( void ) {}

AMateria			&AMateria::operator=( AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType( void ) const
{
	return (this->_type);
}

void				AMateria::use( ICharacter& target )
{
	(void)target;
}