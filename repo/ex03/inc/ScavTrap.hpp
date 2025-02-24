#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
					ScavTrap();
					ScavTrap(const std::string& name);
					ScavTrap(const ScavTrap& scavTrap);
		ScavTrap&	operator=(const ScavTrap& scavTrap);
					~ScavTrap();
		void		attack(const std::string& target);
		void		guardGate();
};

#endif