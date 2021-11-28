#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string const target );
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &rhs );

	void					execute( Bureaucrat const &bureaucrat ) const;

private:
	const std::string	_name;
	bool				_sign;
	const int			_sign_grade;
	const int			_exe_grade;
};

std::ostream &	operator<<( std::ostream &o, ShrubberyCreationForm const &i );

#endif
