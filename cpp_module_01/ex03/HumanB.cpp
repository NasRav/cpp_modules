#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	setName(name);
}

HumanB::HumanB( std::string name, Weapon &weapon )
{
	setName(name);
	setWeapon(weapon);
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::setName( std::string name )
{
	this->_name = name;
}

void	HumanB::attack( void )
{
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}


void	HumanB::setWeapon( Weapon &weapon )
{	
	this->_weapon = &weapon;
}
