#include "Zombie.hpp"

Zombie *newZombie( std::string name )
{
	Zombie *z = new Zombie;	
	z->setZombie(name);
	return (z);
}

