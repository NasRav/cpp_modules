#include "Cat.hpp"

Cat::Cat( void ) :
	Animal("Cat"),
	_brain(new Brain)
{
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat( std::string type ) :
	Animal(type),
	_brain(new Brain)
{
	std::cout << "Parametric Cat constructor called" << std::endl;
}

Cat::Cat( Cat const &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain(*(src._brain));
}

Cat::~Cat( void )
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat			&Cat::operator=( Cat const &rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, rhs._brain->getIdea(i));
	}
	return (*this);
}

void		Cat::makeSound( void ) const
{
	std::cout << this->getType() << " says: Meow" << std::endl;
}

void		Cat::setIdea( int index, std::string &str )
{
	this->_brain->setIdea(index, str);
}

std::string	&Cat::getIdea( int index ) const
{
	return (this->_brain->getIdea(index));
}
