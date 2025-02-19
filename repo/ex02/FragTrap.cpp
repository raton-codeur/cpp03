#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "no_name";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap : default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " : constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& FragTrap)
{
	_name = FragTrap._name;
	_hitPoints = FragTrap._hitPoints;
	_energyPoints = FragTrap._energyPoints;
	_attackDamage = FragTrap._attackDamage;
	std::cout << "FragTrap " << _name << " : copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& FragTrap)
{
	_name = FragTrap._name;
	_hitPoints = FragTrap._hitPoints;
	_energyPoints = FragTrap._energyPoints;
	_attackDamage = FragTrap._attackDamage;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " : destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " : high fives guys !" << std::endl;
}
