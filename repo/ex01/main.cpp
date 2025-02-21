#include "ScavTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		ScavTrap st1;
		ScavTrap st2("bob");
		ScavTrap st3(st2);
		ScavTrap st4;
		st4 = st3;
	}
	// ScavTrap s("marvin");
	// s.attack("target");
	// s.takeDamage(10);
	// s.beRepaired(5);
	// s.guardGate();
	// s.guardGate();
}
