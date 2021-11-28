#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( FragTrap const &src );
	~FragTrap( void );

	FragTrap	&operator=( FragTrap const &rhs );

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

	void		highFivesGuys( void );

protected:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif
