/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:37:51 by yichan            #+#    #+#             */
/*   Updated: 2023/05/24 00:12:00 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int main()
{
	Zombie *vampire = newZombie("Batman");
	vampire->announce();
	randomChump("BucketHead");
	delete vampire;
	return 0;
}