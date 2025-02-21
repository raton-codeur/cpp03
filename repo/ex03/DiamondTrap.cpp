#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name)
{
	std::cout << "DiamondTrap : default constructor called" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "DiamondTrap " << _name << " : constructor called" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) : ClapTrap(diamondTrap), ScavTrap(diamondTrap), FragTrap(diamondTrap), _name(diamondTrap._name)
{
	std::cout << "DiamondTrap " << _name << " : copy constructor called" << std::endl;	
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	_name = diamondTrap._name;
	ClapTrap::_name = diamondTrap.ClapTrap::_name;
	_hitPoints = diamondTrap._hitPoints;
	_energyPoints = diamondTrap._energyPoints;
	_attackDamage = diamondTrap._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " : destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap::_name : " << _name << std::endl;
	std::cout << "ClapTrap::_name : " << ClapTrap::_name << std::endl;
}
