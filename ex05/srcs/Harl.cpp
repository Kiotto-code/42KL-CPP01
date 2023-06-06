/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:31:42 by yichan            #+#    #+#             */
/*   Updated: 2023/06/06 22:34:27 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[DEBUG]: " << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[INFO]: " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
        "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void )
{
    std::cout << "[WARNING]: " << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
        "years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "[ERROR]: " << std::endl;
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}


//switch case was learn in this exercise.
void    Harl::complain(std::string level)
{
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; array[i] != level && i < 4; i++)
         ;
    switch (i)
    {
        case    0:
            this -> debug();
        case    1:
            this -> info();
        case    2:
            this -> warning();
        case    3:
            this -> error();
        default:
            std::cout << "[WRONG MESSAGE]: " << std::endl;
            std::cout << "#@%*@!$%!..I dunno what is that" << std::endl;
    }
    
}