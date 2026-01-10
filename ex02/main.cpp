#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING SCAVTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        ScavTrap serena("Serena");
        serena.attack("Target A");
        serena.guardGate();
    }

    std::cout << "\n-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING FRAGTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        FragTrap fraggy("Fraggy");
        
        fraggy.attack("Target B");
        fraggy.takeDamage(30);
        fraggy.beRepaired(20);
        
        fraggy.highFivesGuys();
    }
    return (0);
}