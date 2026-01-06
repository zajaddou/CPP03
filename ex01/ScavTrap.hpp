
#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &src);
        ScavTrap &operator=(const ScavTrap &src);
        ~ScavTrap();

        void guardGate();
};
