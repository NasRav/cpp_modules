#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template < typename T >
class MutantStack : public std::stack<T>
{
public:
	MutantStack( void ) {}
	MutantStack( MutantStack const &src ) :
		std::stack<T>(src) {}
	virtual ~MutantStack( void ) {}

	MutantStack	&operator=( MutantStack const &rhs )
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin( void )
	{
		return (this->c.begin());
	}

	iterator	end( void )
	{
		return (this->c.end());
	}
};

#endif
