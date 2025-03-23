#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
public:
    HumanB(const std::string &name);
    ~HumanB();
    void attack() const;
    void setWeapon(Weapon &newWeapon);

private:
    std::string name;
    Weapon *weapon;
};

#endif
