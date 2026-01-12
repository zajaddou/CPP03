/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:18:55 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/12 12:49:22 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap f("Fraggy");

    f.attack("Target A");
    f.takeDamage(30);
    f.beRepaired(20);
    f.highFivesGuys();

    std::cout << std::endl;
    return (0);
}