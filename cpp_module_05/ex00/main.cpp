#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	alex = Bureaucrat("Alex", 1);
		std::cout << alex << std::endl;
		alex.decGrade();
		std::cout << alex << std::endl;
		alex.incGrade();
		std::cout << alex << std::endl;
		alex.incGrade();
		std::cout << alex << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	bob = Bureaucrat("Bob", 150);
		std::cout << bob << std::endl;
		bob.incGrade();
		std::cout << bob << std::endl;
		bob.decGrade();
		std::cout << bob << std::endl;
		bob.decGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	chris = Bureaucrat("Chris", 0);
		std::cout << chris << std::endl;
		chris.decGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Bureaucrat	david = Bureaucrat("David", 151);
		std::cout << david << std::endl;
		david.incGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
