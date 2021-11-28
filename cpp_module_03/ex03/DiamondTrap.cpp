#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "default";
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap( std::string name )
{
	std::cout << "Parametric DiamondTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap( DiamondTrap const &src )
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs )
{
	std::cout << "DiamondTrap assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitpoints = rhs._hitpoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void		DiamondTrap::setName( std::string name )
{
	this->_name = name;
}

void		DiamondTrap::setHitpoints( int hitpoints )
{
	this->_hitpoints = hitpoints;
}

void		DiamondTrap::setEnergyPoints( int energyPoints )
{
	this->_energyPoints = energyPoints;
}

void		DiamondTrap::setAttackDamage( int attackDamage )
{
	this->_attackDamage = attackDamage;
}

std::string	DiamondTrap::getName( void )
{
	return (this->_name);
}

int			DiamondTrap::getHitpoints( void )
{
	return (this->_hitpoints);
}

int			DiamondTrap::getEnergyPoints( void )
{
	return (this->_energyPoints);
}

int			DiamondTrap::getAttackDamage( void )
{
	return (this->_attackDamage);
}

void		DiamondTrap::attack( std::string const & target )
{
	std::cout << "DiamondTrap " << this->getName() << " attack " << target << \
	", causing " << _attackDamage << " points of damage!" << std::endl;
}

void		DiamondTrap::takeDamage( unsigned int amount )
{
	std::cout << "DiamondTrap " << this->getName() << " takes " << amount << \
	" points of damage!" << std::endl;
}

void		DiamondTrap::beRepaired( unsigned int amount )
{
	std::cout << "DiamondTrap " << this->getName() << " repares " << amount << \
	" hitpoints!" << std::endl;
}

void		DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap name: " << this->_name << std::endl << \
	"ClapTrap name: " << ClapTrap::_name << std::endl;
}
