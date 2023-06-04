/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:20:14 by yichan            #+#    #+#             */
/*   Updated: 2023/06/04 17:19:51 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (std::string type):m_type(type) {};

Weapon::~Weapon (void)
{
	
};

//const reference: object returned cannot be modified.
const std::string &Weapon::getType(void)
{
	return m_type;
};

void				Weapon::setType(std::string type)
{
		m_type = type;
};