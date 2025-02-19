#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	_isInGateKeeperMode(false)
{
	_name = "no_name";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap : default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) :
	_isInGateKeeperMode(false)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " : constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ScavTrap)
{
	_name = ScavTrap._name;
	_hitPoints = ScavTrap._hitPoints;
	_energyPoints = ScavTrap._energyPoints;
	_attackDamage = ScavTrap._attackDamage;
	_isInGateKeeperMode = ScavTrap._isInGateKeeperMode;
	std::cout << "ScavTrap " << _name << " : copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ScavTrap)
{
	_name = ScavTrap._name;
	_hitPoints = ScavTrap._hitPoints;
	_energyPoints = ScavTrap._energyPoints;
	_attackDamage = ScavTrap._attackDamage;
	_isInGateKeeperMode = ScavTrap._isInGateKeeperMode;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " : destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0)
		std::cout << "ScavTrap " << _name << " tries to attack " << target << " but " << _name << " is dead" << std::endl;
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << " tries to attack " << target << " but " << _name << " has no energy points left" << std::endl;
	else
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << " with " << _attackDamage << " points of damage" << std::endl;
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " remaining energy points : " << _energyPoints << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (_isInGateKeeperMode)
	{
		std::cout << "ScavTrap " << _name << " is still in Gate keeper mode" << std::endl;
	}
	else
	{
		_isInGateKeeperMode = true;
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
	}
}
