#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    _hit_point = 100;
    _energy_point = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hit_point = 100;
    _energy_point = 50;
    _attack_damage = 20;
    std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap " << _name << " copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if (_energy_point > 0 && _hit_point > 0) {
        _energy_point--;
        std::cout << "ScavTrap " << _name << " use is special attacks " << target
                  << ", causing " << _attack_damage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy or health left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}
