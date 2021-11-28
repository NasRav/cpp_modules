#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :
	_name("default"),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) :
	_name(name),
	_hitpoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "Parametric ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs )
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		ClapTrap::setName( std::string name )
{
	this->_name = name;
}

void		ClapTrap::setHitpoints( int hitpoints )
{
	this->_hitpoints = hitpoints;
}

void		ClapTrap::setEnergyPoints( int energyPoints )
{
	this->_energyPoints = energyPoints;
}

void		ClapTrap::setAttackDamage( int attackDamage )
{
	this->_attackDamage = attackDamage;
}

std::string	ClapTrap::getName( void )
{
	return (this->_name);
}

int			ClapTrap::getHitpoints( void )
{
	return (this->_hitpoints);
}

int			ClapTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void		ClapTrap::attack( std::string const & target )
{
	std::cout << "ClapTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " takes " << amount << \
	" points of damage!" << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount )
{
	std::cout << "ClapTrap " << this->getName() << " repares " << amount << \
	" hitpoints!" << std::endl;
}
