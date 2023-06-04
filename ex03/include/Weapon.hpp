/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 15:55:25 by yichan            #+#    #+#             */
/*   Updated: 2023/06/03 01:32:24 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

# define RESET		"\033[0m"
# define GREEN		"\033[38;5;46m"
# define WHITE		"\033[38;5;15m"
# define GREY		"\033[38;5;8m"
# define ORANGE		"\033[38;5;202m"
# define RED		"\033[38;5;160m"


class Weapon
{
	private:
		std::string		m_type;
	public:
		Weapon(std::string type);
		~Weapon();

		std::string const &getType(void);
		void				setType(std::string type);
};

#endif