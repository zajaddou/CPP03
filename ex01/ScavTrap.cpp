/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:40 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:16:43 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->name = name;
    std::cout << "ScavTrap " << name << " Constructor called\n" << std::endl;
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

void ScavTrap::attack(const std::string &target)
{
    if (this->EnergyPoints <= 0 || this->HitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack (No HP or Energy)!" << std::endl;
        return;
    }
    
    this->EnergyPoints--;
    
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->AttackDamage << " points of damage!" << std::endl;
}
