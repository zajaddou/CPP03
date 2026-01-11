/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:19:10 by zajaddou          #+#    #+#             */
/*   Updated: 2026/01/10 14:26:15 by zajaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "A.hpp"

class B : public A
{
    public:
        B();
        B(const std::string &name);
        B(const B &src);
        B &operator=(const B &src);
        ~B();
};

#endif
