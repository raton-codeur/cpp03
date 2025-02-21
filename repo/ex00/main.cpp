#include "ClapTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		ClapTrap ct1;
		ClapTrap ct2("bob");
		ClapTrap ct3(ct2);
		ClapTrap ct4;
		ct4 = ct3;
	}
	
	std::cout << "--- tests 2 ---" << std::endl;
	{
		ClapTrap c("louis");
		c.attack("john");
		c.takeDamage(6);
		c.beRepaired(3);
		c.attack("john");
		c.beRepaired(5);
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("david");
	}

	std::cout << "--- tests 3 ---" << std::endl;
	{
		ClapTrap c("marc");
		c.takeDamage(100);
		c.takeDamage(4);
		c.attack("hugo");
		c.beRepaired(3);
	}
}
