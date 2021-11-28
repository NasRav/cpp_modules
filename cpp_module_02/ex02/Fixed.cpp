#include "Fixed.hpp"

int const		Fixed::_bits = 8;

Fixed::Fixed( void )
{
	this->_num = 0;
}

Fixed::Fixed( int const nbr )
{
	setRawBits(nbr << this->_bits);
}

Fixed::Fixed( float const nbr )
{
	this->setRawBits((int)roundf(nbr * (1 << this->_bits)));
}

Fixed::Fixed( Fixed const &src )
{
	*this = src;
}

Fixed::~Fixed( void )
{
	return ;
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

Fixed			&Fixed::operator=( Fixed const &src )
{
	if (this != &src)
		this->setRawBits(src.getRawBits());
	return (*this);
}

int				Fixed::operator>( Fixed const &src ) const
{
	if (this->getRawBits() > src.getRawBits())
		return (1);
	else
		return (0);
}

int				Fixed::operator<( Fixed const &src ) const
{
	if (this->getRawBits() < src.getRawBits())
		return (1);
	else
		return (0);
}

int				Fixed::operator>=( Fixed const &src ) const
{
	if (this->getRawBits() >= src.getRawBits())
		return (1);
	else
		return (0);
}

int				Fixed::operator<=( Fixed const &src ) const
{
	if (this->getRawBits() <= src.getRawBits())
		return (1);
	else
		return (0);
}

int				Fixed::operator==( Fixed const &src ) const
{
	if (this->getRawBits() == src.getRawBits())
		return (1);
	else
		return (0);
}

int				Fixed::operator!=( Fixed const &src ) const
{
	if (this->getRawBits() != src.getRawBits())
		return (1);
	else
		return (0);
}

Fixed			Fixed::operator+( Fixed const &src ) const
{
	Fixed	fixed(this->toFloat() + src.toFloat());
	return (fixed);
}

Fixed			Fixed::operator-( Fixed const &src ) const
{
	Fixed	fixed(this->toFloat() - src.toFloat());
	return (fixed);
}

Fixed			Fixed::operator*( Fixed const &src ) const
{
	Fixed	fixed(this->toFloat() * src.toFloat());
	return (fixed);
}

Fixed			Fixed::operator/( Fixed const &src ) const
{
	Fixed	fixed(this->toFloat() / src.toFloat());
	return (fixed);
}

Fixed			&Fixed::operator++( void )
{
	++this->_num;
	return (*this);
}

Fixed			&Fixed::operator--( void )
{
	--this->_num;
	return (*this);
}

Fixed			Fixed::operator++( int )
{
	Fixed		fixed(*this);

	++this->_num;
	return (fixed);
}

Fixed			Fixed::operator--( int )
{
	Fixed		fixed(*this);

	--this->_num;
	return (fixed);
}

Fixed const		&Fixed::min( Fixed const &a, Fixed const &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed const		&Fixed::max( Fixed const &a, Fixed const &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed			&Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed			&Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs )
{
	o << rhs.toFloat();
	return (o);
}
