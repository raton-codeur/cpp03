#include "ClapTrap.hpp"

int main()
{
	{ClapTrap	c;}
	ClapTrap	c("bob");

	c.attack("john");
	c.takeDamage(15);
	c.takeDamage(1);
	c.attack("john");
}
