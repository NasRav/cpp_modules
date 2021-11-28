#include <iostream>
#include "Zombie.hpp"

int	main ( void )
{
	Zombie	bob("Bob");
	Zombie	bill = Zombie("Bill");
	Zombie*	jim = new Zombie("Jim");
	Zombie*	alex;

	alex = newZombie("Alex");
	randomChump("Jack");
	alex->announce();
	bob.announce();
	bill.announce();
	jim->announce();
	delete jim;
	delete alex;
	return (0);
}
