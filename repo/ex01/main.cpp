#include "ScavTrap.hpp"

int main()
{
	ScavTrap s("marvin");
	s.attack("target");
	s.takeDamage(10);
	s.beRepaired(5);
	s.guardGate();
	s.guardGate();
}
