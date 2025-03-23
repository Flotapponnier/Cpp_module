#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
public:
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA();
    void attack() const;

private:
    std::string name;
    Weapon &weapon;
};

#endif
