#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog( void );
	WrongDog( WrongDog const &src );
	~WrongDog( void );

	WrongDog		&operator=( WrongDog const &rhs );
	virtual void	makeSound( void ) const;
};

#endif
