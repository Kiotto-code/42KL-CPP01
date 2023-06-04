/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 18:22:52 by yichan            #+#    #+#             */
/*   Updated: 2023/05/25 10:41:44 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

//Multiplezobies were created
Zombie*	zombieHorde(int num, std::string name)
{
	Zombie* tmp;
	
	// In the code, we have created a variable n. n is statically allocated memory, 
	// and during execution, the new keyword is used. It returns the address of the 
	// memory where it has been allocated memory. We have created an array dynamically 
	// using the new keyword. Here the work of memory allocation is done. After taking 
	// input from the user, we store it in the array. Since we don't need the array, 
	// we deallocate the associated memory. The delete keyword is used. 
	// This is how dynamic memory allocation works in C++.
	
	if (num > 0)
	{
		tmp = new Zombie[num];
		for (int it = 0; it < num; it++)
			tmp[it].setName(name);
		return tmp;
	}
	return NULL;
}