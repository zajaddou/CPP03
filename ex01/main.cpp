/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:21 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/12 12:48:09 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap s("Serena");

    s.attack("Target");
    s.takeDamage(10);
    s.beRepaired(10);
    s.guardGate();

    std::cout << std::endl;
    return (0);
}