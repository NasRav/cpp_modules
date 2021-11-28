#include "WrongDog.hpp"

WrongDog::WrongDog( void ) :
	WrongAnimal("WrongDog")
{
	std::cout << "Default WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog( WrongDog const &src ) :
	WrongAnimal(src)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = src;
}

WrongDog::~WrongDog( void )
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog	&WrongDog::operator=( WrongDog const &rhs )
{
	std::cout << "WrongDog assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void		WrongDog::makeSound( void ) const
{
	std::cout << this->getType() << " says: Grrr" << std::endl;
}
