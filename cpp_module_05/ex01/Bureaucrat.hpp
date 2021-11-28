#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat( void );
	Bureaucrat( int grade );
	Bureaucrat( std::string const &name, int grade );
	Bureaucrat( Bureaucrat const &src );
	~Bureaucrat( void );

	Bureaucrat			&operator=( Bureaucrat const &rhs );

	std::string const	&getName( void ) const;
	int					getGrade( void ) const;
	void				decGrade( void );
	void				incGrade( void );
	void				signForm( Form &form ) const;

private:
	std::string			_name;
	int					_grade;

public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

std::ostream			&operator<<( std::ostream &o, Bureaucrat const &i );

#endif
