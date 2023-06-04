/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:57:25 by yichan            #+#    #+#             */
/*   Updated: 2023/06/04 17:23:52 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB (std::string name) : m_name(name), m_weapon(NULL) {}

HumanB::~HumanB (void) {}

void    HumanB::attack(void)
{
    if (m_weapon && m_weapon->getType() != "")
        std::cout << GREEN << m_name << RESET << " attacks with their " << m_weapon->getType() << std::endl;
    else
        std::cout << GREEN << m_name << RESET << " attacks with falcon punch" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}
