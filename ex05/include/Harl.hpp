/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:04:19 by yichan            #+#    #+#             */
/*   Updated: 2023/06/06 19:31:20 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
private:
    /* data */
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl(/* args */);
    ~Harl();
    void complain( std::string level );
    
};

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}



#endif