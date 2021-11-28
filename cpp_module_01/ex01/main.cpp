#include <iostream>
#include "Zombie.hpp"

int	main ( void )
{
	Zombie	*alex;
	Zombie	*bob;

	alex = zombieHorde(7, "Alex");
	for (int i = 0; i < 7; i++)
		alex[i].announce();
	bob = zombieHorde(2, "Bob");
	std::cout << "Bob 0 ";
	bob[0].announce();
	std::cout << "Bob 1 ";
	bob[1].announce();
	delete [] alex;
	delete [] bob;
	return (0);
}
