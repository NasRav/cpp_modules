#include "span.hpp"

Span::Span( void ) {}

Span::Span( unsigned int const n ) :
	_n(n),
	_lst(0) {}

Span::Span( Span const &src )
{
	*this = src;
}

Span::Span( int const min, int const max ) :
	_n(std::abs(max - min)),
	_lst(std::list<int>(_n + 1))
{
	if (min < max)
		std::iota(_lst.begin(), _lst.end(), min);
	else
	{
		std::iota(_lst.begin(), _lst.end(), max);
		_lst.reverse();
	}
}

Span::~Span( void ) {}

Span	&Span::operator=( Span const &rhs )
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_lst = rhs._lst;
	}
	return (*this);
}

void	Span::addNumber( int num )
{
	if (_lst.size() == _n)
		throw (Span::CannotAddNumber());
	_lst.push_back(num);
}

int		Span::shortestSpan( void )
{
	if (_lst.size() <= 1)
		throw (Span::CannotFindSpan());

	Span							tmp(*this);
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	it_end;
	unsigned int					span = UINT_MAX;
	unsigned int					prev_span;

	tmp._lst.sort();
	tmp._lst.unique();

	for (it = tmp._lst.begin(), it_end = tmp._lst.end(); it != it_end; it++)
	{
		prev_span = std::abs(*it - *std::next(it, 1));
		if (span > prev_span)
			span = prev_span;
	}
	return (span);
}

int		Span::longestSpan( void )
{
	if (_lst.size() <= 1)
		throw (Span::CannotFindSpan());

	Span	tmp(*this);
	int 	max = *std::max_element(tmp._lst.begin(), tmp._lst.end());
	int 	min = *std::min_element(tmp._lst.begin(), tmp._lst.end());
	return (max - min);
}

const char*	Span::CannotAddNumber::what() const throw()
{
	return ("Can't add number");
}

const char*	Span::CannotFindSpan::what() const throw()
{
	return ("Can't find span");
}
