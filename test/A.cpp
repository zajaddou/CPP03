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
    std::cout << "A " << name << " Constructor" << std::endl;
    this->name = name;
    this->data = 10;
};

A::A()
{
    std::cout << "A Default Constructor" << std::endl;
    this->name = "Default";
    this->data = 10;
};

A::A(const A &src)
{
    std::cout << "A Copy Constructor" << std::endl;
    *this = src;
};

A &A::operator=(const A &src)
{
    std::cout << "A Copy Assignment Operator" << std::endl;
    this->name = src.name;
    this->data = src.data;
    return (*this);
};

A::~A()
{
    std::cout << "A Destructor" << std::endl;
};

void A::attack(const std::string &target)
{
    this->data--;
    std::cout << "A " << this->name << " attacks " << target << std::endl;
}

void A::takeDamage(unsigned int amount)
{
    if (this->data == 0)
    {
        std::cout << "A " << this->name << " is already dead!" << std::endl;
        return;
    }

    if (amount >= this->data)
        this->data = 0;
    else
        this->data -= amount;

    std::cout << "A " << this->name << " took " << amount << " points of damage!" << std::endl;
}

void A::beRepaired(unsigned int amount)
{
    this->data += amount;
    std::cout << "A " << this->name << " repair " << amount << std::endl;
}