#include "ClapTrap.hpp"


ClapTrap::ClapTrap(): _name("default"), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) 
	:_name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << "Constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other)
	:_name(other._name), _hit_point(other._hit_point), _energy_point(other._energy_point), _attack_damage(other._attack_damage)
{
	std::cout << "Copy of " << get_name()<< " have beem made" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        set_hit_point(other._hit_point);
        set_energy_point(other._energy_point);
        set_attack_damage(other._attack_damage);
        set_name(other._name);
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor calle for " << _name << std::endl;
}

void ClapTrap::set_name(const std::string& value) {
	this->_name = value;
}

void ClapTrap::set_hit_point(const int value){
	this->_hit_point = value;
}

void ClapTrap::set_energy_point(const int value){
	this->_energy_point = value;
}

void ClapTrap::set_attack_damage(const int value){
	this->_attack_damage= value;
}

std::string ClapTrap::get_name() const{
	return this->_name;
}

int ClapTrap::get_hit_point() const{
	return this->_hit_point;
}

int ClapTrap::get_energy_point() const{
	return this->_energy_point;
}

int ClapTrap::get_attack_damage() const{
	return this->_attack_damage;
}

void ClapTrap::attack(const std::string &target)
{
	if(_hit_point == 0)
		std::cout << "Claptrap" << get_name() << " cannot attack because : " << "dead" << std::endl;
	else if(get_energy_point() == 0)
		std::cout << "Claptrap" << get_name() << " cannot attack because : " << "no energy" << std::endl;
	else 
	{
		std::cout << "ClapTrap" << get_name() << "attacks " << target << " causing " << get_attack_damage() << " points damage !" << std::endl;
		set_energy_point(_energy_point - 1);
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(get_hit_point() > (int)amount)
	{
		set_hit_point(_hit_point - amount);
	}
	else if(get_hit_point() > 0)
	{
		set_hit_point(0);
		std::cout << "ClapTrap" << get_name() << " is dead" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap" << get_name() << " is already dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap" << get_name() << " takes " << amount << " point of damage ! He now has " << get_hit_point() << " Amount of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(get_hit_point() == 0)
	{
		std::cout << "Claptrap" << get_name() << " Cannot be repaired because : " << " dead" << std::endl;
	}
	else if(get_energy_point()== 0)
	{
		std::cout << "Claptrap" << get_name() << " Cannot be repaired because : " << " dead" << std::endl;
	}
	else
	{
		set_hit_point(_hit_point + amount);
		std::cout << "ClapTrap" << get_name() << " is repaired by "<< amount << " points ! He now has " << get_hit_point() << std::endl;
	}
}
