#include "FragTrap.hpp"

int main()
{
	std::cout << "--- tests 1 ---" << std::endl;
	{
		FragTrap ft1;
		FragTrap ft2("bob");
		FragTrap ft3(ft2);
		FragTrap ft4;
		ft4 = ft3;
	}
	std::cout << "--- tests 2 ---" << std::endl;
	{
		FragTrap ft("john");
		ft.attack("david");
		ft.takeDamage(30);
		ft.beRepaired(10);
		ft.highFivesGuys();
	}
}
