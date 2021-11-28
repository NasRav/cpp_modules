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

	Fixed				&operator=( Fixed const &rhs );

	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	int					toInt( void ) const;
	float				toFloat( void ) const;

private:
	int					_num;
	int static const	_bits;
};

std::ostream			&operator<<( std::ostream &o, Fixed const &rhs );

#endif
