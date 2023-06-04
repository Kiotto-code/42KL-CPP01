/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:19:12 by yichan            #+#    #+#             */
/*   Updated: 2023/06/04 17:20:18 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):m_name(name), m_weapon(weapon) {};

HumanA::~HumanA()
{
	
};

void	HumanA::attack(void)
{
	if (!(m_weapon.getType() == ""))
        std::cout << GREEN << m_name << RESET << " attacks with their " << m_weapon.getType() << std::endl;
    else
        std::cout << GREEN << m_name << RESET << " I lost my weapon??" << std::endl;
};

