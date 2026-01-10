/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:03 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:16:06 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "                  TESTING CLAPTRAP                     " << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    {

        ClapTrap clappy("Clappy");
        
        clappy.attack("Target A");
        clappy.takeDamage(5);
        clappy.beRepaired(5);

        clappy.takeDamage(10);
        clappy.attack("Target B");
        clappy.beRepaired(10);
        
        std::cout << std::endl;
    }

    return (0);
}