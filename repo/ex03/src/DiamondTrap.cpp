#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name(ClapTrap::_name)
{
	std::cout << "DiamondTrap : default constructor called" << std::endl;
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"),
	FragTrap(name + "_clap_name"),
	_name(name)
{
	std::cout << "DiamondTrap " << _name << " : constructor called" << std::endl;
	_energyPoints = ScavTrap::_energyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) :
	ClapTrap(diamondTrap),
	ScavTrap(diamondTrap),
	FragTrap(diamondTrap),
	_name(diamondTrap._name)
{
	std::cout << "DiamondTrap " << _name << " : copy constructor called" << std::endl;
	_energyPoints = diamondTrap.ScavTrap::_energyPoints;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	_name = diamondTrap._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " : destructor called" << std::endl;
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap::_name : " << _name << std::endl;
	std::cout << "ClapTrap::_name : " << ClapTrap::_name << std::endl;
}

void DiamondTrap::checkAttributes() const
{
	std::cout << "_hitPoints : " << _hitPoints << std::endl;
	std::cout << "_energyPoints : " << _energyPoints<< std::endl;
	std::cout << "_attackDamage : " << _attackDamage << std::endl;
}
