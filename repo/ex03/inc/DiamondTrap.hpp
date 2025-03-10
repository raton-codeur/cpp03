#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private :
		std::string _name;
	public :
						DiamondTrap();
						DiamondTrap(const std::string& name);
						DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap&	operator=(const DiamondTrap& diamondTrap);
						~DiamondTrap();
		void			whoAmI() const;
		void			printAttributes() const;
};

#endif