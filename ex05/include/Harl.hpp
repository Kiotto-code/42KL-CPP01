/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:04:19 by yichan            #+#    #+#             */
/*   Updated: 2023/06/07 18:44:54 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

#define RESET			"\033[0m"
#define GREEN			"\033[38;5;46m"
#define WHITE			"\033[38;5;15m"
#define GREY			"\033[38;5;8m"
#define RED				"\033[38;5;160m"


class Harl
{
private:
    /* data */
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl(){};
    ~Harl(){};
    void complain( std::string level );
    
};

// Harl::Harl()
// {
// };

// Harl::~Harl()
// {
// };

#endif
