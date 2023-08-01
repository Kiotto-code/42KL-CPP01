/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:37:51 by yichan            #+#    #+#             */
/*   Updated: 2023/07/12 13:48:36 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

/**
 * @brief newZombie: create zombie using new keyword
 * 
 * 
 * @return int 
 */
int main()
{
	Zombie *vampire = newZombie("Batman");
	vampire->announce();
	randomChump("BucketHead");
	delete vampire;
	return 0;
}