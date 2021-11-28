#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Form;

class Intern
{
public:
	Intern( void );
	Intern( Intern const &src );
	virtual ~Intern( void );

	Intern	&operator=( Intern const &rhs );

	Form	*makeForm( std::string const &form_name, std::string const &target );
};

typedef	struct	s_forms
{
	std::string	name;
	Form		*base;
}				t_forms;

#endif
