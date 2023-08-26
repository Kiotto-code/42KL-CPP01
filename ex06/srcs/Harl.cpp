/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:31:42 by yichan            #+#    #+#             */
/*   Updated: 2023/08/27 01:37:01 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
	std::cout << GREEN;
	std::cout << "[DEBUG]: " << std::endl;
	std::cout << GREY;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
	"\nI really do!" << RESET << std::endl;
}

void    Harl::info(void)
{
	std::cout << "[INFO]: " << std::endl;
	std::cout << GREY;
	std::cout << "I cannot believe adding extra bacon costs more money."
	"\nYou didn’t put enough bacon in my burger!"
	"\nIf you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void    Harl::warning( void )
{
	std::cout << "[WARNING]: " << std::endl;
	std::cout << GREY;
	std::cout << "I think I deserve to have some extra bacon for free."
	"\nI’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}

void    Harl::error( void )
{
	std::cout << "[ERROR]: " << std::endl;
	std::cout << GREY;
	std::cout <<  "This is unacceptable!"
	"\nI want to speak to the manager now." << RESET << std::endl;
}

static void	stutter( void )
{
	std::cout << "[WRONG MESSAGE]: " << std::endl;
	std::cout << GREY;
	std::cout << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
}

//switch case was learn in this exercise.
void    Harl::complain(std::string level)
{
	int i;
	static void	(Harl::*fcnPtr[4])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
	};

	static std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};


	for(i = 0; i < 4; i++)
	{
		// (this->*fcnPtr[i])();
		if (level == array[i])
			break;
	}
	
	switch (i)
	{
		case 0:
			(this->*fcnPtr[0])();
		case 1:
			(this->*fcnPtr[1])();
		case 2:
			(this->*fcnPtr[2])();
		case 3:
			(this->*fcnPtr[3])();
			break;
		default:
			stutter();
			break;
	}
	
}
