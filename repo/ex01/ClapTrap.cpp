#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_name("no_name"),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap : default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) :
	_name(name),
	_hitPoints(10),
	_energyPoints(10),
	_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " : constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) :
	_name(clapTrap._name),
	_hitPoints(clapTrap._hitPoints),
	_energyPoints(clapTrap._energyPoints),
	_attackDamage(clapTrap._attackDamage)
{
	std::cout << "ClapTrap " << _name << " : copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clapTrap)
{
	_name = clapTrap._name;
	_hitPoints = clapTrap._hitPoints;
	_energyPoints = clapTrap._energyPoints;
	_attackDamage = clapTrap._attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " : destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << "points of damage !" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes " << amount << "points of damage !" << std::endl;
	if (amount < _hitPoints)
		_hitPoints -= amount;
	else
		_hitPoints = 0;

	// if (_hitPoints > 0)
	// {
	// 	if (amount < _hitPoints)
	// 	{
	// 		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage !" << std::endl;
	// 		_hitPoints -= amount;
	// 	}
	// 	else
	// 	{
	// 		std::cout << "ClapTrap " << _name << " takes " << _hitPoints << " points of damage !" << std::endl;
	// 		_hitPoints = 0;
	// 	}
	// }
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << "hit points" << std::endl;
		_energyPoints--;
	}
}


