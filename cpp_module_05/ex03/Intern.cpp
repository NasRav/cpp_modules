#include "Intern.hpp"

Intern::Intern( void ) {}

Intern::Intern( Intern const &src )
{
	*this = src;
}

Intern::~Intern( void ) {}

Intern	&Intern::operator=( Intern const &rhs )
{
	(void)rhs;
	return (*this);
}


Form	*Intern::makeForm( std::string const &form_name, std::string const &target )
{
	t_forms	forms[3] =
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target)}
	};
	int		last = -1;

	for (int i = 0; i < 3; ++i)
	{
		if (form_name == forms[i].name)
		{
			last = i;
			continue ;
		}
		else
			delete forms[i].base;
	}
	if (last == -1)
	{
		std::cout << "Intern can't create form: " << form_name << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates form: " << form_name << std::endl;
	return (forms[last].base);
}
