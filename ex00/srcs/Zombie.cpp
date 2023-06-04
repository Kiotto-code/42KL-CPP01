/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:19:43 by yichan            #+#    #+#             */
/*   Updated: 2023/05/24 00:14:29 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// this keyword purpose:
// Disambiguation
// Accessing class member
// Returning the current object:

Zombie::Zombie(std::string name) : name(name) {};

Zombie::~Zombie(void) { std::cout << this->name << ": i am dead, heellllp meeee ;(" << std::endl;}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

