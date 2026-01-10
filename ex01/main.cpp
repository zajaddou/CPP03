
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING SCAVTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {
        ScavTrap serena("Serena");
        
        serena.attack("Target A");
        serena.takeDamage(10);
        serena.beRepaired(10);
        serena.guardGate();
    }

    return (0);
}