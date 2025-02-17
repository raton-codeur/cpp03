#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include "iostream"

class ClapTrap
{
	private :
		std::string	_name;
		int			_hitPoints; // points de vie
		int			_energyPoints; // points de mana
		int			_attackDamage; // points d'attaque
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