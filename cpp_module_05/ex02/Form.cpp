#include "Form.hpp"

Form::Form( void ) :
	_name("default"),
	_sign(false),
	_sign_grade(150),
	_exe_grade(150) {}

Form::Form( std::string const &name, int sign_grade, int exe_grade ) :
	_name(name),
	_sign(false),
	_sign_grade(sign_grade),
	_exe_grade(exe_grade)
{
	if (sign_grade < 1 || exe_grade < 1)
		throw (Form::GradeTooHighException());
	else if (sign_grade > 150 || exe_grade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form( Form const &src ) :
	_name(src.getName()),
	_sign(src.getSign()),
	_sign_grade(src.getSignGrade()),
	_exe_grade(src.getExeGrade())
{
	*this = src;
}

Form::~Form( void ) {}

std::string const	&Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSign( void ) const
{
	return (this->_sign);
}

int					Form::getSignGrade( void ) const
{
	return (this->_sign_grade);
}

int					Form::getExeGrade( void ) const
{
	return (this->_exe_grade);
}

void				Form::beSigned( Bureaucrat const &bureaucrat )
{
	int const		grade = bureaucrat.getGrade();

	if (grade > this->getSignGrade() || grade > this->getExeGrade())
		throw (Form::GradeTooLowException());
	else
		this->_sign = true;
}

Form				&Form::operator=( Form const &rhs )
{
	if (this != &rhs)
	{
		int			*_sign_grade = (int *)&this->_sign_grade;
		int			*_exe_grade = (int *)&this->_exe_grade;
		std::string	*_name = (std::string *)&this->_name;

		this->_sign = rhs.getSign();
		*_sign_grade = rhs.getSignGrade();
		*_exe_grade = rhs.getExeGrade();
		*_name = rhs.getName();
	}
	return (*this);
}

const char*			Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}

const char*			Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

std::ostream		&operator<<( std::ostream &o, Form const &i )
{
	o << "Form " << i.getName() << ", grade to sign it: " << i.getSignGrade() << \
	", grade to execute it: " << i.getExeGrade();
	return (o);
}
