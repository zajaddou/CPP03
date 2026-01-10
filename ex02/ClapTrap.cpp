/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:19:31 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:20:17 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
    this->name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    this->name = "Default";
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = src;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy Assignment Operator called" << std::endl;
    this->name = src.name;
    this->HitPoints = src.HitPoints;
    this->EnergyPoints = src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;
    return (*this);
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
};

void ClapTrap::attack(const std::string &target)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack (No HP or Energy)!" << std::endl;
        return;
    }
    
    this->EnergyPoints--;
    
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
        return;
    }

    if (amount >= this->HitPoints)
        this->HitPoints = 0;
    else
        this->HitPoints -= amount;

    std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot repair (No HP or Energy)!" << std::endl;
        return;
    }

    this->EnergyPoints--;
    this->HitPoints += amount;

    std::cout << "ClapTrap " << this->name << " repairs itself, getting " << amount << " hit points back!" << std::endl;
}