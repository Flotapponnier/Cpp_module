#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default_frag") {
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    _hit_point = 100;
    _energy_point = 100;
    _attack_damage = 30;
    std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap " << _name << " copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (_energy_point > 0 && _hit_point > 0) {
        _energy_point--;
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attack_damage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << _name << " has no energy or health left to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " requests a high five! ✋" << std::endl;
}
