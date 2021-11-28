#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) :
	_type("Default WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) :
	_type(type)
{
	std::cout << "Parametric WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs )
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->_type);
}

void		WrongAnimal::makeSound( void ) const
{
	std::cout << this->getType() << " makes WrongAnimal's sounds" << std::endl;
}
