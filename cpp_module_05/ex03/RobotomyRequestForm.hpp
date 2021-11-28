#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include <ctime>
# include <cstdlib>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string const target );
	RobotomyRequestForm( RobotomyRequestForm const &src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm	&operator=( RobotomyRequestForm const &rhs );

	void				execute( Bureaucrat const &bureaucrat ) const;

private:
	const std::string	_name;
	bool				_sign;
	const int			_sign_grade;
	const int			_exe_grade;
};

std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &i );

#endif
