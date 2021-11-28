#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) :
	_name("default"),
	_hitpoints(100),
	_energyPoints(50),
	_attackDamage(20)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) :
	_name(name),
	_hitpoints(100),
	_energyPoints(50),
	_attackDamage(20)
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

void		ScavTrap::setName( std::string name )
{
	this->_name = name;
}

void		ScavTrap::setHitpoints( int hitpoints )
{
	this->_hitpoints = hitpoints;
}

void		ScavTrap::setEnergyPoints( int energyPoints )
{
	this->_energyPoints = energyPoints;
}

void		ScavTrap::setAttackDamage( int attackDamage )
{
	this->_attackDamage = attackDamage;
}

std::string	ScavTrap::getName( void )
{
	return (this->_name);
}

int			ScavTrap::getHitpoints( void )
{
	return (this->_hitpoints);
}

int			ScavTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int			ScavTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void		ScavTrap::attack( std::string const & target )
{
	std::cout << "ScavTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		ScavTrap::takeDamage( unsigned int amount )
{
	std::cout << "ScavTrap " << this->getName() << " takes " << amount << \
	" points of damage!" << std::endl;
}

void		ScavTrap::beRepaired( unsigned int amount )
{
	std::cout << "ScavTrap " << this->getName() << " repares " << amount << \
	" hitpoints!" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->getName() << \
	" has enterred in Gate keeper mode" << std::endl;
}
