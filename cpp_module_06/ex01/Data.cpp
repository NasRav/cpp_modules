#include "Data.hpp"

Data::Data( void ) :
	_c(0),
	_i(0),
	_d(0) {}

Data::Data( char c, int i, double d ) :
	_c(c),
	_i(i),
	_d(d) {}

Data::Data( Data const &src )
{
	*this = src;
}

Data::~Data( void ) {}

Data		&Data::operator=( Data const &rhs )
{
	if (this != &rhs)
	{
		_c = rhs._c;
		_i = rhs._i;
		_d = rhs._d;
	}
	return (*this);
}

char		Data::getChar( void ) const
{
	return (_c);
}

int			Data::getInt( void ) const
{
	return (_i);
}

double		Data::getDouble( void ) const
{
	return (_d);
}

uintptr_t	serialize( Data *ptr )
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize( uintptr_t raw )
{
	return (reinterpret_cast<Data *>(raw));
}
