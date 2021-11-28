#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( std::string name );
	DiamondTrap( DiamondTrap const &src );
	~DiamondTrap( void );

	DiamondTrap	&operator=( DiamondTrap const &rhs );

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

	void		whoAmI( void );

private:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;
};

#endif
