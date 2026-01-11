/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:19:31 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:20:17 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(const std::string &name)
{
    std::cout << "A " << name << " Constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
};

A::A()
{
    std::cout << "A Default Constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
};

A::A(const A &src)
{
    std::cout << "A Copy Constructor called" << std::endl;
    *this = src;
};

A &A::operator=(const A &src)
{
    std::cout << "A Copy Assignment Operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
};

A::~A()
{
    std::cout << "A Destructor called" << std::endl;
};

void A::attack(const std::string &target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << "A " << this->name << " cannot attack (No HP or Energy)!" << std::endl;
        return;
    }
    
    this->energyPoints--;
    
    std::cout << "A " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void A::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << "A " << this->name << " is already dead!" << std::endl;
        return;
    }

    if (amount >= this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints -= amount;

    std::cout << "A " << this->name << " took " << amount << " points of damage!" << std::endl;
}

void A::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << "A " << this->name << " cannot repair (No HP or Energy)!" << std::endl;
        return;
    }

    this->energyPoints--;
    this->hitPoints += amount;

    std::cout << "A " << this->name << " repairs itself, getting " << amount << " hit points back!" << std::endl;
}