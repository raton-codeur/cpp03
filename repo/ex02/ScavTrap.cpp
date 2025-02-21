#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap : default constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap " << _name << " : constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap) : ClapTrap(ScavTrap)
{
	std::cout << "ScavTrap " << _name << " : copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap)
{
	_name = ScavTrap._name;
	_hitPoints = ScavTrap._hitPoints;
	_energyPoints = ScavTrap._energyPoints;
	_attackDamage = ScavTrap._attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " : destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage" << std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}
