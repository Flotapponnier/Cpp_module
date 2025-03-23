#include "Zombie.hpp" 


Zombie* zombieHorde(int N, std::string name);

int main()
{
	int size;
	size = 20;
	Zombie *horde = zombieHorde(size, "floflo");
	delete [] horde;
}

