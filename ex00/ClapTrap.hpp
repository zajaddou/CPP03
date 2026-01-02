/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 11:38:20 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/02 15:34:24 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &src);
        ClapTrap &operator=(const ClapTrap &src);
        ~ClapTrap();

        void takeDamage(unsigned int amount);
        void attack(const std::string& target);
        void beRepaired(unsigned int amount);
};

#endif
