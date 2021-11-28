#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	Brain( void );
	Brain( Brain const &src );
	virtual ~Brain( void );

	Brain				&operator=( Brain const &rhs );

	virtual void		setIdea( int index, std::string &str );
	virtual std::string &getIdea(int index);

private:
	std::string			_ideas[100];
};

#endif
