/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:19:07 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:25:46 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B() : A()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "B Default Constructor called" << std::endl;
}

B::B(const std::string &name) : A(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "B " << name << " Constructor called" << std::endl;
}

B::~B()
{
    std::cout << "B Destructor called" << std::endl;
}

B::B(const B &src) : A(src)
{
    *this = src;
    std::cout << "B Copy Constructor called" << std::endl;
}

B &B::operator=(const B &src)
{
    std::cout << "B Copy Assignment Operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
};

void B::guardGate()
{
    std::cout <<  "B is now in Gate keeper mode" << std::endl;
};

void B::attack(const std::string &target)
{
    if (this->energyPoints <= 0 || this->hitPoints <= 0)
    {
        std::cout << "B " << this->name << " cannot attack (No HP or Energy)!" << std::endl;
        return;
    }
    
    this->energyPoints--;
    
    std::cout << "B " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}
