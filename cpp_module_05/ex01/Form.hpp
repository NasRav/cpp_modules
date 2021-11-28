#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form( void );
	Form( std::string const &name, int sign_grade, int exe_grade );
	Form( Form const &src );
	~Form( void );

	Form				&operator=( Form const &rhs );

	std::string const	&getName( void ) const;
	bool				getSign( void ) const;
	int					getSignGrade( void ) const;
	int					getExeGrade( void ) const;

	void				beSigned( Bureaucrat const &bureaucrat );

private:
	const std::string	_name;
	bool				_sign;
	const int			_sign_grade;
	const int			_exe_grade;

public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what(void) const throw();
	};
};

std::ostream			&operator<<( std::ostream &o, Form const &i );

#endif
