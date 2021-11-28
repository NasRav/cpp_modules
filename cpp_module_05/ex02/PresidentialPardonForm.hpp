#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const target );
	PresidentialPardonForm( Form const &src );
	virtual ~PresidentialPardonForm( void );

	PresidentialPardonForm	&operator=( PresidentialPardonForm const &rhs );

	void					execute( Bureaucrat const &bureaucrat ) const;

private:
	const std::string		_name;
	bool					_sign;
	const int				_sign_grade;
	const int				_exe_grade;
};

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i );

#endif
