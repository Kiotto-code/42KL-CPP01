/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:35:02 by yichan            #+#    #+#             */
/*   Updated: 2023/06/07 17:50:04 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	// Zombie* newZombie = new Zombie(name);
	// return newZombie;
	return (new Zombie(name));
}