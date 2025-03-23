#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{	
	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap & other);
	ClapTrap& operator=(const ClapTrap& other);
	void attack(const std:: string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void set_name(const std::string& value);
	void set_hit_point(const int value);
	void set_energy_point(const int value);
	void set_attack_damage(const int value);
	std::string get_name() const;
	int get_hit_point() const;
	int get_energy_point() const;
	int get_attack_damage() const ;

	~ClapTrap();
	
	private:
	std::string _name;
	int _hit_point;
	int _energy_point;
	int _attack_damage;

};

#endif
