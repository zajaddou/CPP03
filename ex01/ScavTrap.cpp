/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 16:00:53 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/02 16:43:47 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 10;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    *this = src;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
{
    this->name = name;
    attackDamage = 20;
    energyPoints = 50;
    hitPoints = 10;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &src)
{
    this->attackDamage = src.attackDamage;
    this->energyPoints = src.energyPoints;
    this->hitPoints = src.hitPoints;
    this->name = src.name;
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap in Gate Guard mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << this->name;

    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        this->energyPoints -= 1;
        std::cout << " attacks " << target << ", causing " << this->attackDamage << " points of attackDamage!" << std::endl;
    }
    else
        std::cout << " cannot attack." << std::endl;
};