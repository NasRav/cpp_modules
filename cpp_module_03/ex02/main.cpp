#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	ClapTrap	alex("Alex");
	ScavTrap	bob("Bob");
	FragTrap	chris("Chris");

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

	std::cout << "Player 3: " << chris.getName() << std::endl;
	std::cout << "His HP: " << chris.getHitpoints() << std::endl;
	std::cout << "His energy: " << chris.getEnergyPoints() << std::endl;
	std::cout << "His initial attack damage: " << chris.getAttackDamage() << std::endl;

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

	chris.setAttackDamage(4);
	std::cout << "Player " << chris.getName() << " now has attack damage: " \
	<< chris.getAttackDamage() << std::endl;
	chris.attack("Bob");
	bob.takeDamage(chris.getAttackDamage());
	bob.setHitpoints(bob.getHitpoints() - chris.getAttackDamage());
	std::cout << "Player " << bob.getName() << " now has " \
	<< bob.getHitpoints() << " HP" << std::endl;
	chris.setEnergyPoints(chris.getEnergyPoints() - chris.getAttackDamage() * 2);
	std::cout << "Player " << chris.getName() << " now has " \
	<< chris.getEnergyPoints() << " energy" << std::endl;

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

	std::cout << "Player 3: " << chris.getName() << std::endl;
	std::cout << "His HP: " << chris.getHitpoints() << std::endl;
	std::cout << "His energy: " << chris.getEnergyPoints() << std::endl;
	std::cout << "His attack damage: " << chris.getAttackDamage() << std::endl;

	std::cout << std::endl;

	bob.guardGate();
	chris.highFivesGuys();

	std::cout << std::endl;

	return 0;
}