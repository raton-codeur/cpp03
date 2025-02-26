#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		DiamondTrap dt1;
		dt1.whoAmI();
		dt1.printAttributes();
		dt1.beRepaired(5);
		dt1.printAttributes();
		DiamondTrap dt2("bob");
		dt2.whoAmI();
		dt2.printAttributes();
		DiamondTrap dt3(dt2);
		dt3.whoAmI();
		dt3.printAttributes();
		DiamondTrap dt4;
		dt4 = dt3;
		dt4.whoAmI();
		dt4.printAttributes();
	}
	std::cout << "--- tests 2 ---" << std::endl;
	{
		DiamondTrap d("john");
		d.whoAmI();
		d.attack("target");
		d.takeDamage(10);
		d.beRepaired(5);
		d.guardGate();
		d.highFivesGuys();
		d.whoAmI();
	}
}
