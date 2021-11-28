#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( ScavTrap const &src );
	~ScavTrap( void );

	ScavTrap	&operator=( ScavTrap const &rhs );

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

	void		guardGate( void );

protected:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif
