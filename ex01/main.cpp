
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING SCAVTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {

        ScavTrap serena("Serena");
        
        std::cout << "\n[ ACTIONS ]" << std::endl;

        serena.attack("Target A");
        serena.takeDamage(10);
        serena.beRepaired(10);
        serena.guardGate();

        std::cout << "\n[ DESTRUCTION ]" << std::endl;
    }

    return (0);
}