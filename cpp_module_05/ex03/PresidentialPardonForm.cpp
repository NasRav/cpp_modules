#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :
	Form("default", 25, 5),
	_name("default"),
	_sign_grade(25),
	_exe_grade(5) {}

PresidentialPardonForm::PresidentialPardonForm( std::string const target ) :
	Form(target, 25, 5),
	_name(target),
	_sign_grade(25),
	_exe_grade(5) {}

PresidentialPardonForm::PresidentialPardonForm( Form const &src ) :
	Form(src),
	_name(src.getName()),
	_sign(src.getSign()),
	_sign_grade(src.getSignGrade()),
	_exe_grade(src.getExeGrade())
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs )
{
	if (this != &rhs)
	{
		int				*_sign_grade = (int *)&this->_sign_grade;
		int				*_exe_grade = (int *)&this->_exe_grade;
		std::string		*_name = (std::string *)&this->_name;

		this->_sign = rhs.getSign();
		*_sign_grade = rhs.getSignGrade();
		*_exe_grade = rhs.getExeGrade();
		*_name = rhs.getName();
	}
	return (*this);
}

void			PresidentialPardonForm::execute( Bureaucrat const &bureaucrat ) const
{
	if (bureaucrat.getGrade() > this->getExeGrade())
		throw (Form::GradeTooLowException());	
	std::cout << bureaucrat.getName() << " has been forgiven by Zafod Beeblebrox" << std::endl;
}

std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i )
{
	o << "PresidentialPardonForm " << i.getName() << ", grade to sign it: " << i.getSignGrade() << \
	", grade to execute it: " << i.getExeGrade();
	return (o);
}
