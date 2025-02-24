#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		DiamondTrap dt1;
		DiamondTrap dt2("bob");
		DiamondTrap dt3(dt2);
		DiamondTrap dt4;
		dt4 = dt3;
	}
	std::cout << "--- tests 2 ---" << std::endl;
	{
		DiamondTrap d("john");
		d.attack("target");
		d.takeDamage(10);
		d.beRepaired(5);
		d.guardGate();
		d.highFivesGuys();
		d.whoAmI();
	}
}
