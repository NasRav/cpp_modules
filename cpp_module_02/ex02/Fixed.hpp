#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
public:
	Fixed( void );
	Fixed( Fixed const &src );
	Fixed ( int const nbr );
	Fixed ( float const nbr );
	~Fixed( void );

	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	int					toInt( void ) const;
	float				toFloat( void ) const;

	Fixed				&operator=( Fixed const &src );

	int					operator>( Fixed const &src ) const;
	int					operator<( Fixed const &src ) const;
	int					operator>=( Fixed const &src ) const;
	int					operator<=( Fixed const &src ) const;
	int					operator==( Fixed const &src ) const;
	int					operator!=( Fixed const &src ) const;

	Fixed				operator+( Fixed const &src ) const;
	Fixed				operator-( Fixed const &src ) const;
	Fixed				operator*( Fixed const &src ) const;
	Fixed				operator/( Fixed const &src ) const;

	Fixed				&operator++( void );
	Fixed				&operator--( void );
	Fixed				operator++( int n );
	Fixed				operator--( int n );

	static Fixed		&min( Fixed &a, Fixed &b );
	static Fixed		&max( Fixed &a, Fixed &b );
	static Fixed const	&min( Fixed const &a, Fixed const &b );
	static Fixed const	&max( Fixed const &a, Fixed const &b );

private:
	int					_num;
	int static const	_bits;
};

std::ostream			&operator<<( std::ostream &o, Fixed const &rhs );

#endif
