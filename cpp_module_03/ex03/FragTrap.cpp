#include "FragTrap.hpp"

FragTrap::FragTrap( void ) :
	_name("default"),
	_hitpoints(100),
	_energyPoints(100),
	_attackDamage(30)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap( std::string name ) :
	_name(name),
	_hitpoints(100),
	_energyPoints(100),
	_attackDamage(30)
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

void		FragTrap::setName( std::string name )
{
	this->_name = name;
}

void		FragTrap::setHitpoints( int hitpoints )
{
	this->_hitpoints = hitpoints;
}

void		FragTrap::setEnergyPoints( int energyPoints )
{
	this->_energyPoints = energyPoints;
}

void		FragTrap::setAttackDamage( int attackDamage )
{
	this->_attackDamage = attackDamage;
}

std::string	FragTrap::getName( void )
{
	return (this->_name);
}

int			FragTrap::getHitpoints( void )
{
	return (this->_hitpoints);
}

int			FragTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int			FragTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void		FragTrap::attack( std::string const & target )
{
	std::cout << "FragTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		FragTrap::takeDamage( unsigned int amount )
{
	std::cout << "FragTrap " << this->getName() << " takes " << amount << \
	" points of damage!" << std::endl;
}

void		FragTrap::beRepaired( unsigned int amount )
{
	std::cout << "FragTrap " << this->getName() << " repares " << amount << \
	" hitpoints!" << std::endl;
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << this->getName() << \
	" requests high five" << std::endl;
}
