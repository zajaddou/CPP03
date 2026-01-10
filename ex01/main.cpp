/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:21 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:16:23 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING SCAVTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {

        ScavTrap serena("Serena");

        serena.attack("Target");
        serena.takeDamage(10);
        serena.beRepaired(10);
        serena.guardGate();

        std::cout << std::endl;
    }

    return (0);
}