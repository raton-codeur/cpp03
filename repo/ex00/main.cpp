#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << "--- basic tests ---" << std::endl;
		ClapTrap ct1;
		ClapTrap ct2("bob");
		ClapTrap ct3(ct2);
		ClapTrap ct4;
		ct4 = ct3;
	}
	
	std::cout << "--- attack tests ---" << std::endl;
	{
		ClapTrap c("louis");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
	}
	{
		ClapTrap c("marc");
		c.takeDamage(100);
		c.attack("hugo");
	}

	std::cout << "--- takeDamage tests ---" << std::endl;
	{
		ClapTrap c("jack");
		c.takeDamage(3);
		c.takeDamage(2);
		c.takeDamage(6);
		c.takeDamage(1);
	}
	{
		ClapTrap c("michael");
		c.takeDamage(10);
	}

	std::cout << "--- beRepaired tests ---" << std::endl;
	{
		ClapTrap c("ken");
		c.beRepaired(3);
		c.takeDamage(6);
		c.beRepaired(4);
		c.beRepaired(6);
		c.takeDamage(3);
		c.beRepaired(3);
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.attack("john");
		c.takeDamage(1);
		c.beRepaired(4);
	}
	{
		ClapTrap c("david");
		c.takeDamage(100);
		c.beRepaired(1);
	}
}
