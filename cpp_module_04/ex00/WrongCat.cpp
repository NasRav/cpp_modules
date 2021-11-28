#include "WrongCat.hpp"

WrongCat::WrongCat( void ) :
	WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) :
	WrongAnimal(type)
{
	std::cout << "Parametric WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=( WrongCat const &rhs )
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void		WrongCat::makeSound( void ) const
{
	std::cout << this->getType() << " says: Shhh" << std::endl;
}