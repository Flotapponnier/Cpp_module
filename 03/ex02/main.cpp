#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "----- Creating ClapTrap -----" << std::endl;
    ClapTrap clap("Clappy");

    std::cout << "\n----- Creating ScavTrap -----" << std::endl;
    ScavTrap scav("Scavy");

    std::cout << "\n----- Creating FragTrap -----" << std::endl;
    FragTrap frag("Fraggy");

    std::cout << "\n----- Testing ClapTrap's attack -----" << std::endl;
    clap.attack("EnemyA");

    std::cout << "\n----- Testing ScavTrap's attack and guard mode -----" << std::endl;
    scav.attack("Enemy1");
    scav.guardGate();

    std::cout << "\n----- Testing FragTrap's attack and high fives -----" << std::endl;
    frag.attack("Enemy2");
    frag.highFivesGuys();

    std::cout << "\n----- Testing Damage and Repair -----" << std::endl;
    clap.takeDamage(5);
    scav.takeDamage(20);
    frag.takeDamage(40);

    clap.beRepaired(10);
    scav.beRepaired(15);
    frag.beRepaired(25);

    return 0;
}
