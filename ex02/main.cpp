#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap a("Fraggy");

    a.highFivesGuys();
    a.attack("Target");
    a.takeDamage(30);
    a.beRepaired(20);
    
    return (0);
}