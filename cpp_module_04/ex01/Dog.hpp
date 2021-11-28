#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog( void );
	Dog( Dog const &src );
	virtual ~Dog( void );

	Dog					&operator=( Dog const &rhs );

	virtual void		makeSound( void ) const;
	virtual void		setIdea( int index, std::string &str );
	virtual std::string	&getIdea( int ) const;

private:
	Brain				*_brain;
};

#endif
