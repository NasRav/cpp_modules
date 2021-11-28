#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) :
	ClapTrap("default", 100, 50, 20)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "Parametric ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const &src )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs )
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->getName() << \
	" has enterred in Gate keeper mode" << std::endl;
}
