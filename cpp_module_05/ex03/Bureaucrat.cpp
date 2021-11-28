#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) :
	_grade(150),
	_name("default") {}

Bureaucrat::Bureaucrat( int grade ) :
	_grade(grade),
	_name("default")
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) :
	_grade(grade),
	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const &src )
{
	*this = src;
}

Bureaucrat::~Bureaucrat( void ) {}

Bureaucrat			&Bureaucrat::operator=( Bureaucrat const &rhs )
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
		this->_name = rhs.getName();
	}
	return (*this);
}

std::string const	&Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void				Bureaucrat::decGrade( void )
{
	if (this->getGrade() + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	++this->_grade;
}

void				Bureaucrat::incGrade( void )
{
	if (this->getGrade() - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	--this->_grade;
}

void				Bureaucrat::signForm( Form &form ) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " cannot sign " \
		<< form.getName() << " because " << e.what() << std::endl;
	}
}

void					Bureaucrat::executeForm( Form const &form )
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->getName() \
		<< " executs form " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Bureaucrat " << this->getName() \
		<< " cannot execute form " << form.getName() \
		<< " because " << e.what() << std::endl;
	}
}

const char*			Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char*			Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream		&operator<<( std::ostream &o, Bureaucrat const &i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
