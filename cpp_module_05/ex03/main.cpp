#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern	someRandomIntern;
	Form*	rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->execute(Bureaucrat("Alex", 1));
	delete rrf;

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	rrf->execute(Bureaucrat("Bob", 1));
	delete rrf;

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf->execute(Bureaucrat("Chris", 1));
	delete rrf;

	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("not existing", "Bender");

	return (0);
}
