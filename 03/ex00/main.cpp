#include "ClapTrap.hpp"

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	{
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\033[34mTesting\033[0m" << std::endl;
		a.attack("some other Claptrap");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other Claptrap");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
	}
	return (0);
}
