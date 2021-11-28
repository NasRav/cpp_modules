#include "Cat.hpp"

Cat::Cat( void ) :
	Animal("Cat")
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat( std::string type ) :
	Animal(type)
{
	std::cout << "Parametric Cat constructor called" << std::endl;
}

Cat::Cat( Cat const &src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=( Cat const &rhs )
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void		Cat::makeSound( void ) const
{
	std::cout << this->getType() << " says: Meow" << std::endl;
}