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
	std::cout << "--- tests 2 ---" << std::endl;
	{
		ScavTrap s("john");
		s.attack("david");
		s.takeDamage(30);
		s.beRepaired(10);
		s.guardGate();
	}
}
