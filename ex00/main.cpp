/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:16:03 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/12 12:55:00 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap c("C");
    
    c.attack("T");
    c.takeDamage(5);
    c.beRepaired(5);

    c.takeDamage(10);
    c.attack("T");
    c.beRepaired(10);
    
    std::cout << std::endl;
    return (0);
}