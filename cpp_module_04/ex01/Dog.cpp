#include "Dog.hpp"

Dog::Dog( void ) :
	Animal("Dog"),
	_brain(new Brain)
{
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog( Dog const &src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Dog::~Dog( void )
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog			&Dog::operator=( Dog const &rhs )
{	
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << this->getType() << " says: Woof" << std::endl;
}

void		Dog::setIdea( int index, std::string &str )
{
	this->_brain->setIdea(index, str);
}

std::string	&Dog::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}
