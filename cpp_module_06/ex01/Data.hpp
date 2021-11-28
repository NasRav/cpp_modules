#ifndef DATA_HPP
# define DATA_HPP

# include <stdint.h>

class Data
{
public:
	Data( void );
	Data( char c, int i, double d );
	Data( Data const &src );
	~Data( void );

	Data	&operator=( Data const &rhs );

	char	getChar( void ) const;
	int		getInt( void ) const;
	double	getDouble( void ) const;

private:
	char	_c;
	int		_i;
	double	_d;
};

uintptr_t	serialize( Data *ptr );
Data*		deserialize( uintptr_t raw );

#endif
