
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}


ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap Constructor called for " << this->name << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "ScavTrap Copy Assignment Operator called" << std::endl;
    this->name = src.name;
    this->HitPoints = src.HitPoints;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return (*this);
};


void ScavTrap::guardGate()
{
    std::cout <<  "ScavTrap is now in Gate keeper mode" << std::endl;
};
