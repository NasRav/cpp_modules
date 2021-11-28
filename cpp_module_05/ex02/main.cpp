#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main( void )
{
	Form		*form = NULL;
	Bureaucrat	alex("Alex", 40);
	Bureaucrat	bob("Bob", 1);
	Bureaucrat	chris("Chris", 150);

	try
	{
		form = new RobotomyRequestForm("A1");
		form->execute(alex);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		form = new PresidentialPardonForm("B2");
		form->execute(bob);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		form = new ShrubberyCreationForm("C3");
		form->execute(chris);
		delete form;
		form = NULL;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	bob.executeForm(PresidentialPardonForm("28B"));
	alex.executeForm(PresidentialPardonForm("28C"));

	bob.executeForm(RobotomyRequestForm("29D"));
	alex.executeForm(RobotomyRequestForm("29A"));
	
	alex.executeForm(ShrubberyCreationForm("FORM"));

	return (0);
}
