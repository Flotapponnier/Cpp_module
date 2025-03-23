#include "Zombie.hpp"


Zombie::Zombie() : name("foo"){
}

Zombie::~Zombie(){
	std::cout << "Deconstructor called for " << name << '\n';
}

void Zombie::announce(){
std::cout<< "<" << name << ">" << " BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getZombie() const{
	return this->name;
}

void Zombie::setZombie(std::string Newname) {
    this->name = Newname;
}
