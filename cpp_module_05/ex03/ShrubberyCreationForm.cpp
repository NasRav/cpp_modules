#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("default", 145, 137),
	_name("default"),
	_sign_grade(145),
	_exe_grade(137) {}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) :
	Form(target, 145, 137),
	_name(target),
	_sign_grade(145),
	_exe_grade(137) {}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) :
	Form(src),
	_name(src.getName()),
	_sign(src.getSign()),
	_sign_grade(src.getSignGrade()),
	_exe_grade(src.getExeGrade())
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( ShrubberyCreationForm const &rhs )
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

void				ShrubberyCreationForm::execute( Bureaucrat const &bureaucrat ) const
{
	std::ofstream	ofs;
	char const		*tree[] =
	{
		"    /\\\n",
		"   /  \\\n",
		"  /    \\\n",
		" /      \\\n",
		"/________\\\n",
		"    ||    \n",
		NULL
	};

	if (bureaucrat.getGrade() > this->getExeGrade())
		throw (Form::GradeTooLowException());
	ofs.open(bureaucrat.getName() + "_shrubbery");
	if (ofs.fail())
	{
		std::cerr << "Cannot create '" << (bureaucrat.getName() + "_shrubbery")\
		<< "'" << std::endl;
		return ;
	}

	for (int i = 0; tree[i]; i++)
		ofs << tree[i];
	ofs.close();
}

std::ostream		&operator<<( std::ostream &o, ShrubberyCreationForm const &i )
{
	o << "ShrubberyCreationForm " << i.getName() << ", grade to sign it: "\
	<< i.getSignGrade() << ", grade to execute it: " << i.getExeGrade();
	return (o);
}
