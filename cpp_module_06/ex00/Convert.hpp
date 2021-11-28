#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include <cfloat>
# include <cmath>

class Convert
{
public:
	Convert( void );
	Convert( double arg );
	Convert( Convert const &src );
	~Convert( void );

	Convert	&operator=( Convert const &rhs );

	char	getChar( void ) const;
	int		getInt( void ) const;
	float	getFloat( void ) const;
	double	getDouble( void ) const;

	bool	pseudo_literal( void ) const;
	void	output( void ) const;

private:
	double	_arg;

public:
	class NonDisplayable : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
	
	class Impossible : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

#endif
