#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie z; 
	z.setZombie(name);
    z.announce();
}
