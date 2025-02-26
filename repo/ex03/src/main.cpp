#include "DiamondTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		DiamondTrap dt1;
		dt1.whoAmI();
		dt1.checkAttributes();
		DiamondTrap dt2("bob");
		dt2.whoAmI();
		dt2.checkAttributes();
		DiamondTrap dt3(dt2);
		dt3.whoAmI();
		dt3.checkAttributes();
		DiamondTrap dt4;
		dt4 = dt3;
		dt4.whoAmI();
		dt4.checkAttributes();
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
