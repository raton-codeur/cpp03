#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include "iostream"

class ClapTrap
{
	private :
		std::string		_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
	public :
					ClapTrap();
					ClapTrap(const std::string& name);
					ClapTrap(const ClapTrap& clapTrap);
		ClapTrap&	operator=(const ClapTrap& clapTrap);
					~ClapTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif