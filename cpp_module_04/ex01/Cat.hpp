#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( std::string type );
	Cat( Cat const &src );
	virtual ~Cat( void );

	Cat					&operator=( Cat const &rhs );

	virtual void		makeSound( void ) const;
	virtual void		setIdea( int index, std::string &str );
	virtual std::string	&getIdea( int ) const;

private:
	Brain				*_brain;
};

#endif
