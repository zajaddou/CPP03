/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:15 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/12 12:06:03 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "ClapTrap " << name << " Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
};

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
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
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
};

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack (No HP or Energy)!" << std::endl;
        return;
    }
    
    this->energyPoints--;
    
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead!" << std::endl;
        return;
    }

    if (amount >= this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;

    std::cout << "ClapTrap " << this->name << " took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot repair (No HP or Energy)!" << std::endl;
        return;
    }

    this->energyPoints--;
    this->hitPoints += amount;

    std::cout << "ClapTrap " << this->name << " repairs itself, getting " << amount << " hit points back!" << std::endl;
}