#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	alex( "Alex" );
	ScavTrap	bob( "Bob" );

	std::cout << std::endl;

	std::cout << "Player 1: " << alex.getName() << std::endl;
	std::cout << "His HP: " << alex.getHitpoints() << std::endl;
	std::cout << "His energy: " << alex.getEnergyPoints() << std::endl;
	std::cout << "His initial attack damage: " << alex.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "Player 2: " << bob.getName() << std::endl;
	std::cout << "His HP: " << bob.getHitpoints() << std::endl;
	std::cout << "His energy: " << bob.getEnergyPoints() << std::endl;
	std::cout << "His initial attack damage: " << bob.getAttackDamage() << std::endl;

	std::cout << std::endl;

	alex.setAttackDamage(2);
	std::cout << "Player " << alex.getName() << " now has attack damage: " \
	<< alex.getAttackDamage() << std::endl;
	alex.attack("Bob");
	bob.takeDamage(alex.getAttackDamage());
	bob.setHitpoints(bob.getHitpoints() - alex.getAttackDamage());
	std::cout << "Player " << bob.getName() << " now has " \
	<< bob.getHitpoints() << " HP" << std::endl;
	alex.setEnergyPoints(alex.getEnergyPoints() - alex.getAttackDamage() * 2);
	std::cout << "Player " << alex.getName() << " now has " \
	<< alex.getEnergyPoints() << " energy" << std::endl;

	std::cout << std::endl;

	bob.setAttackDamage(3);
	std::cout << "Player " << bob.getName() << " now has attack damage: " \
	<< bob.getAttackDamage() << std::endl;
	bob.attack("Alex");
	alex.takeDamage(bob.getAttackDamage());
	alex.setHitpoints(alex.getHitpoints() - bob.getAttackDamage());
	std::cout << "Player " << alex.getName() << " now has " \
	<< alex.getHitpoints() << " HP" << std::endl;
	bob.setEnergyPoints(bob.getEnergyPoints() - bob.getAttackDamage() * 2);
	std::cout << "Player " << bob.getName() << " now has " \
	<< bob.getEnergyPoints() << " energy" << std::endl;

	std::cout << std::endl;

	std::cout << "Player 1: " << alex.getName() << std::endl;
	std::cout << "His HP: " << alex.getHitpoints() << std::endl;
	std::cout << "His energy: " << alex.getEnergyPoints() << std::endl;
	std::cout << "His attack damage: " << alex.getAttackDamage() << std::endl;

	std::cout << std::endl;

	std::cout << "Player 2: " << bob.getName() << std::endl;
	std::cout << "His HP: " << bob.getHitpoints() << std::endl;
	std::cout << "His energy: " << bob.getEnergyPoints() << std::endl;
	std::cout << "His attack damage: " << bob.getAttackDamage() << std::endl;

	std::cout << std::endl;

	bob.guardGate();

	std::cout << std::endl;

	return 0;
}