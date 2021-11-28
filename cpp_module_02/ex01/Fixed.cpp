#include "Fixed.hpp"

int const		Fixed::_bits = 8;

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed( int const nbr )
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nbr << this->_bits);
}

Fixed::Fixed( float const nbr )
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits((int)roundf(nbr * (1 << this->_bits)));
}

Fixed::Fixed( Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed			&Fixed::operator=( Fixed const &rhs )
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &rhs)
		this->setRawBits(rhs.getRawBits());
	return (*this);
}

int				Fixed::getRawBits( void ) const
{
	return (this->_num);
}

void			Fixed::setRawBits( int const raw )
{
	this->_num = raw;
}

int				Fixed::toInt( void ) const
{
	int			nbr;

	nbr = this->getRawBits() >> this->_bits;
	return (nbr);
}

float			Fixed::toFloat( void ) const
{
	float		nbr;

	nbr = (float)this->getRawBits() / (1 << this->_bits);
	return (nbr);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs )
{
	o << rhs.toFloat();
	return (o);
}
