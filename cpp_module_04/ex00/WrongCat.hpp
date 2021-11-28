#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat( void );
	WrongCat( std::string type );
	WrongCat( WrongCat const &src );
	virtual ~WrongCat( void );

	WrongCat		&operator=( WrongCat const &rhs );
	
	virtual void	makeSound( void ) const;
};

#endif
