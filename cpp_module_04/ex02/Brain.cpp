#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i].clear();
}

Brain::Brain( Brain const &src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain		&Brain::operator=( Brain const &rhs )
{	
	if (this != &rhs)
		for (size_t i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	return (*this);
}


void		Brain::setIdea( int index, std::string &str )
{	
	if (index >= 100)
		return ;
	this->_ideas[index] = str;
}

std::string	&Brain::getIdea( int index )
{
	if (index >= 100)
		return (this->_ideas[99]);
	return (this->_ideas[index]);
}
