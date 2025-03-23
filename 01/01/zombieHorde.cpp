#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *z = new Zombie;	
	z->setZombie(name);
	return (z);
}
Zombie* zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
	{
        horde[i].setZombie(name);
		horde->announce();
	}
    return horde;
}
