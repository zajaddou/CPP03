
#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING CLAPTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {

        ClapTrap clappy("Clappy");
        
        std::cout << "\n[ ACTIONS ]" << std::endl;
        clappy.attack("Target A");
        clappy.takeDamage(5);
        clappy.beRepaired(5);
        
        // Test edge cases (No Energy or No HP)
        clappy.takeDamage(10);       // Should die
        clappy.attack("Target B");   // Should fail (dead)
        clappy.beRepaired(10);       // Should fail (dead)
        
        std::cout << "\n[ DESTRUCTION ]" << std::endl;
    }

    return (0);
}