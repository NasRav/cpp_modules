#include "Convert.hpp"

Convert::Convert( void ) :
	_arg(0.0) {}

Convert::Convert( double arg ) :
	_arg(arg) {}

Convert::Convert( Convert const &src )
{
	*this = src;
}

Convert::~Convert( void ) {}

Convert	&Convert::operator=( Convert const &rhs )
{
	if (this != &rhs)
		this->_arg = rhs._arg;
	return (*this);
}

char		Convert::getChar( void ) const
{
	char	c;

	c = static_cast<char>(_arg);
	if (this->pseudo_literal() || _arg < CHAR_MIN || _arg > CHAR_MAX)
		throw (Convert::Impossible());
	else if (!std::isprint(c))
		throw (Convert::NonDisplayable());
	return (c);
}

int			Convert::getInt( void ) const
{
	int		i;
	if (this->pseudo_literal() || _arg < INT_MIN || _arg > INT_MAX)
		throw (Convert::Impossible());
	i = static_cast<int>(_arg);
	return (i);
}

float		Convert::getFloat( void ) const
{
	float	f;

	f = static_cast<float>(_arg);
	return (f);
}

double		Convert::getDouble( void ) const
{
	return (_arg);
}

bool		Convert::pseudo_literal( void ) const
{
	bool	b;

	b = std::isfinite(_arg);
	return (!b);
}

void		Convert::output( void ) const
{
	try
	{
		char	c;
		c = this->getChar();
		std::cout << "char: '" << c << "'"<< std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: " << e.what() << std::endl;
	}

	try
	{
		int		i;
		i = this->getInt();
		std::cout << "int: " << i << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "int: " << e.what() << std::endl;
	}

	std::cout << "float: " << std::fixed << std::setprecision(1)\
	<< this->getFloat() << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(1)\
	<< this->getDouble() << std::endl;
}

const char*	Convert::NonDisplayable::what() const throw()
{
	return ("Non displayable");
}

const char*	Convert::Impossible::what() const throw()
{
	return ("impossible");
}
