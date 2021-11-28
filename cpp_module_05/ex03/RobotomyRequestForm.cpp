#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :
	Form("default", 72, 45),
	_name("default"),
	_sign_grade(72),
	_exe_grade(45) {}

RobotomyRequestForm::RobotomyRequestForm( std::string const target ) :
	Form(target, 72, 45),
	_name(target),
	_sign_grade(72),
	_exe_grade(45) {}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) :
	Form(src),
	_name(src.getName()),
	_sign(src.getSign()),
	_sign_grade(src.getSignGrade()),
	_exe_grade(src.getExeGrade())
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {}

RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs )
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

void				RobotomyRequestForm::execute( Bureaucrat const &bureaucrat ) const
{
	if (bureaucrat.getGrade() > this->getExeGrade())\
		throw (Form::GradeTooLowException());
	std::srand(std::time(NULL));
	std::cout << "*drill noises*" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << bureaucrat.getName() << " failed to be robotomized." << std::endl;
	else
		std::cout << bureaucrat.getName() << " has been robotomized!" << std::endl;
}

std::ostream		&operator<<( std::ostream &o, RobotomyRequestForm const &i )
{
	o << "RobotomyRequestForm " << i.getName() << ", grade to sign it: "\
	<< i.getSignGrade() << ", grade to execute it: " << i.getExeGrade();
	return (o);
}
