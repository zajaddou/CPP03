
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    this->name = name;
    std::cout << "FragTrap " << name << " Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src) 
{
    std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
    this->name = src.name;
    this->HitPoints = src.HitPoints;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout <<  "FragTrap is now requesting a high-five" << std::endl;
}