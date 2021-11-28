#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
public:
	Animal( void );
	Animal( std::string type );
	Animal( Animal const &src );
	virtual ~Animal( void );

	Animal				&operator=( Animal const &rhs );

	virtual void		makeSound( void ) const;
	std::string			getType( void ) const;
	virtual void		setIdea( int index, std::string &str) = 0;
	virtual std::string &getIdea( int index ) const = 0;

protected:
	std::string			_type;
};

#endif
