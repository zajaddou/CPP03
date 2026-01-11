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
    this->data = 100;
    std::cout << "B Default Constructor" << std::endl;
}

B::B(const std::string &name) : A(name)
{
    this->data = 100;
    std::cout << "B " << name << " Constructor" << std::endl;
}

B::~B()
{
    std::cout << "B Destructor" << std::endl;
}

B::B(const B &src) : A(src)
{
    *this = src;
    std::cout << "B Copy Constructor" << std::endl;
}

B &B::operator=(const B &src)
{
    std::cout << "B Copy Assignment Operator" << std::endl;
    this->name = src.name;
    this->data = src.data;
    return (*this);
};
