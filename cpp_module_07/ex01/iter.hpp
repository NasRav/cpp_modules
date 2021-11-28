#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter(T* arr, size_t size, void (*f)(T &t))
{
	for (size_t i = 0; i < size; i++)
	{
		(*f)(arr[i]);
	}
}

template< typename T >
void	f(T &t)
{
	std::cout << t << std::endl;
}

#endif
