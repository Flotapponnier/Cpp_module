#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    std::cout << "Creating a ClapTrap...\n";
    ClapTrap clap("Clappy");

    std::cout << "\nCreating a ScavTrap...\n";
    ScavTrap scav("Scavy");

    std::cout << "\nTesting ClapTrap's attack...\n";
    clap.attack("EnemyA");

    std::cout << "\nTesting ScavTrap's attacks...\n";
    scav.attack("Enemy1");
    scav.attack("Enemy2");

    std::cout << "\nClapTrap takes damage...\n";
    clap.takeDamage(5);

    std::cout << "\nScavTrap takes damage...\n";
    scav.takeDamage(30);

    std::cout << "\nClapTrap repairs itself...\n";
    clap.beRepaired(10);

    std::cout << "\nScavTrap repairs itself...\n";
    scav.beRepaired(20);

    std::cout << "\nActivating ScavTrap's guard mode...\n";
    scav.guardGate();

    std::cout << "\nEnd of program, destructors will be called...\n";
    return 0;
}
