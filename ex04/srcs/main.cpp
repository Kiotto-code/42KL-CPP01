/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 01:59:00 by yichan            #+#    #+#             */
/*   Updated: 2023/08/01 21:28:45 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <iostream>
#include <string>
#include <fstream>
#include "sed.h"

std::string ft_replace(std::string str, std::string search, std::string replacestr) 
{
    size_t pos = str.find(search);
    // std::string ret;
    // If the search string is found, replace it with the replace string
    if (pos != std::string::npos) {
        str = str.substr(0, pos) + replacestr + str.substr(pos + search.length());
    }
    return str;
}

int main(int ac, char **av)
{
    if (ac != 4 || !av[2][0] || !av[3][0] )
        return (std::cerr << "Bad arguments number" << std::endl , 0);
    std::ifstream text;
    std::ofstream output;
    std::string str;
    size_t pos;
    
    std::string old(av[2]);
    text.open(av[1]);
    if (!text.is_open())
    {
        std::cerr << text << " could not be opened for reading!" << std::endl;
        return 1;
    }
    output.open(std::string(av[1]) + ".replace");
    while (std::getline (text, str, '\0'))
    {
        pos = str.find(old);
        while (pos != std::string::npos && old != av[3])
        {
            pos = str.find(old);    
            str = ft_replace(str, old, av[3]);
            // if (pos != std::string::npos)
        }            
        // output << str << std::endl;
        output << str;
    }
    text.close();
    output.close();
    check_leaks();
}