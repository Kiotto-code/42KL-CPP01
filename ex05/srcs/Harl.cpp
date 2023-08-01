/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:31:42 by yichan            #+#    #+#             */
/*   Updated: 2023/08/01 21:37:56 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
	std::cout << GREEN;
	std::cout << "[DEBUG]: " << std::endl;
	std::cout << GREY;
	std::cout <<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void    Harl::info(void)
{
	std::cout << "[INFO]: " << std::endl;
	std::cout << GREY;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
		"enough bacon in my burger! If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

void    Harl::warning( void )
{
	std::cout << "[WARNING]: " << std::endl;
	std::cout << GREY;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
		"years whereas you started working here since last month." << RESET << std::endl;
}

void    Harl::error( void )
{
	std::cout << "[ERROR]: " << std::endl;
	std::cout << GREY;
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

static void	stutter( void )
{
	std::cout << "[WRONG MESSAGE]: " << std::endl;
	std::cout << GREY;
	std::cout << "#@%*@!$%!..I dunno what is that" << RESET << std::endl;
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
		if (level == array[i])
			break;
	}
	
	// *ptr = &i;
	if (i < 4)
		(this->*fcnPtr[i])();
	else
		stutter();
	// switch (i)
	// {
	// 	case 0:
	// 		(this->*fcnPtr[0])();
	// 		break;
	// 	case 1:
	// 		(this->*fcnPtr[1])();
	// 		break;
	// 	case 2:
	// 		(this->*fcnPtr[2])();
	// 		break;
	// 	case 3:
	// 		(this->*fcnPtr[3])();
	// 		break;
	// 	default:
	// 		stutter();
	// 		break;
	// }
}
