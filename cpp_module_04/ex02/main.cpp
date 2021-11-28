#include "Dog.hpp"
#include "Cat.hpp"

int	main( void )
{
	Cat		cat;
	std::cout << std::endl;
	Dog		dog;
	std::cout << std::endl;
//	Animal	animal;

	Animal *array[4];
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		if (i % 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
		std::cout << std::endl;
	}

	for (int i = 0; i < 4; i++)
		array[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete array[i];
		std::cout << std::endl;
	}

	return (0);
}
