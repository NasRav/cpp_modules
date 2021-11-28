#include "FragTrap.hpp"

FragTrap::FragTrap( void ) :
	ClapTrap("default", 100, 100, 30)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) :
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "Parametric FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=( FragTrap const &rhs )
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getName() << \
	" requests high five" << std::endl;
}
