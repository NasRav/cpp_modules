#include "Animal.hpp"

Animal::Animal( void ) :
	_type("Default Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal( std::string type ) :
	_type(type)
{
	std::cout << "Parametric Animal constructor called" << std::endl;
}

Animal::Animal( Animal const &src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal		&Animal::operator=( Animal const &rhs )
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->_type);
}

void		Animal::makeSound( void ) const
{
	std::cout << this->getType() << " makes Animal's sounds" << std::endl;
}
