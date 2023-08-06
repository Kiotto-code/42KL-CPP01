/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:43:18 by yichan            #+#    #+#             */
/*   Updated: 2023/08/06 22:00:33 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# define	COUNT 4

int main(void)
{
	std::string		name;
	
	std::cout << "Enter name of zombie: ";
	if (!std::getline(std::cin, name))
		exit(EXIT_SUCCESS);

	Zombie*	zombies = zombieHorde(COUNT, name);
	for (int it = 0; it < COUNT; it++)
		zombies[it].announce();

	//delete zombies that are multiple statically allocated
	delete[] zombies;
	system("leaks -q zombie");
	return 0;
}

// in certain OS the destructor called in reverse order;