#include "Zombie.hpp" 

void	randomChump(std::string name);

int main()
{
	Zombie *z = new Zombie;
	z->announce();
	randomChump("Floflo");
	delete z;
	return (0);
}

