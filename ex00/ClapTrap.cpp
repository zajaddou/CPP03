/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 11:38:15 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/02 15:49:55 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
    std::cout << "ClapTrap " << this->name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy Constructor" << std::endl;
    this->name = src.name;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    this->hitPoints = src.hitPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy Assignment Operator" << std::endl;
    this->name = src.name;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    this->hitPoints = src.hitPoints;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor : " << name << std::endl;
}













































void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name;
    
    if (this->hitPoints == 0)
    {
        std::cout << " is already dead." << std::endl;
        return ;
    }

    if (amount >= this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;

    std::cout << " takes " << amount << " attackDamage! Current HP: " << this->hitPoints << std::endl;
};












void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->name;

    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << " attacks " << target << ", causing " << this->attackDamage << " points of attackDamage!" << std::endl;
    }
    else
        std::cout << " cannot attack." << std::endl;
};










void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name;
    
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        this->hitPoints += amount;
        std::cout << " repairs itself, recovering " << amount;
        std::cout << " HP! Current HP: " << this->hitPoints << std::endl;
    }
    else
        std::cout << " cannot be repaired." << std::endl;
};
