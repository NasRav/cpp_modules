#include "Dog.hpp"

Dog::Dog( void ) :
	Animal("Dog")
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog( Dog const &src ) :
	Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=( Dog const &rhs )
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void		Dog::makeSound( void ) const
{
	std::cout << this->getType() << " says: Woof" << std::endl;
}
