/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:43:12 by yichan            #+#    #+#             */
/*   Updated: 2023/05/24 00:23:04 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	Zombie::index(1);

Zombie::Zombie()	{};

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << this->name << ": I was BORNNNNNN!"	<< std::endl;
};

Zombie::~Zombie()
{
	std::cout << this->name << ": Plss dun hurrttt mee bwahhhh" << std::endl;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name + "-" + std::to_string(index);
	std::cout << this->name << ": I was NAMEEED!" << std::endl;
	index++;
}