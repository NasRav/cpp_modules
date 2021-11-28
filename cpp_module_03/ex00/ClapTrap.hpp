#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( ClapTrap const &src );
	~ClapTrap( void );

	ClapTrap	&operator=( ClapTrap const &rhs );

	void		setName( std::string name );
	void		setHitpoints( int hitpoints );
	void		setEnergyPoints( int energyPoints );
	void		setAttackDamage( int attackDamage );

	std::string	getName( void );
	int			getHitpoints( void );
	int			getEnergyPoints( void );
	int			getAttackDamage( void );

	void		attack( std::string const & target );
	void		takeDamage( unsigned int amount );
	void		beRepaired( unsigned int amount );

private:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif
