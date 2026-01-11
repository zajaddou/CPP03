/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:18:45 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:18:46 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &src);
        FragTrap &operator=(const FragTrap &src);
        ~FragTrap();
        
        void highFivesGuys(void);
};


#endif