#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();	//will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal* meta_2 = new WrongAnimal();
	const WrongAnimal* j_2 = new WrongDog();
	const WrongAnimal* i_2 = new WrongCat();

	std::cout << j_2->getType() << " " << std::endl;
	std::cout << i_2->getType() << " " << std::endl;
	i_2->makeSound();
	j_2->makeSound();
	meta_2->makeSound();
	delete meta_2;
	delete j_2;
	delete i_2;

	return 0;
}