#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon )
{
	setName(name);
	setWeapon(weapon);
}

HumanA::~HumanA( void )
{
	return ;
}

void	HumanA::setName( std::string name )
{
	this->_name = name;
}

void	HumanA::attack( void )
{
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon->getType() << std::endl;
}

void	HumanA::setWeapon( Weapon &weapon )
{
	this->_weapon = &weapon;
}
