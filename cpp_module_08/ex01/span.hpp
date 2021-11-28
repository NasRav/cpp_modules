#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <numeric>
# include <climits>

class Span
{
public:
	Span( void );
	Span( unsigned int const n );
	Span( int const min, int const max );
	Span( Span const &src );
	~Span( void );

	Span			&operator=( Span const &src );

	void			addNumber( int num );
	int				shortestSpan( void );
	int				longestSpan( void );

private:
	unsigned int	_n;
	std::list<int>	_lst;

public:
	class CannotAddNumber : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};

	class CannotFindSpan : public std::exception
	{
	public:
		virtual const char*	what() const throw();
	};
};

#endif
