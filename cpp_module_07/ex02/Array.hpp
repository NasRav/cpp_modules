#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array
{
public:
	Array( void ) :
		_array(NULL),
		_size(0) {}

	Array( unsigned int const n ) :
		_array(new T[n]()),
		_size(n) {}

	Array( Array const &src )
	{
		*this = src;
	}

	~Array( void )
	{
		delete [] this->_array;
	}

	Array	&operator=( Array const &rhs )
	{
		if (this != &rhs)
		{
			this->_array = new T[rhs.size()];
			this->_size = rhs.size();
			for (uint i = 0; i < this->_size; i++)
				_array[i] = rhs._array[i];
		}
		return (*this);
	}

	T		&operator[]( int idx )
	{
		if (idx < 0 || static_cast<uint>(idx) >= this->_size)
			throw (Array::OutOfLimits());
		return (this->_array[idx]);
	}

	uint	size( void ) const
	{
		return (this->_size);
	}

	void	print( void ) const
	{
		for (uint i = 0; i < this->_size; i++)
			std::cout << i << " : " << this->_array[i] << std::endl;
	}

private:
	T		*_array;
	uint	_size;

public:
	class OutOfLimits : public std::exception
	{
	public:
		char const *what(void) const throw()
		{
			return ("Out Of Limits");
		}
	};
};

#endif
