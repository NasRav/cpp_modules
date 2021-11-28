#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <deque>

template< typename T >
typename T::iterator easyfind( T &container, int val )
{
	typename T::iterator	i;

	i = std::find(container.begin(), container.end(), val);
	if (*i != val)
		throw (std::string("Number not found"));
	return (i);
}

#endif
