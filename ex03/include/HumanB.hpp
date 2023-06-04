/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yichan <yichan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:01:22 by yichan            #+#    #+#             */
/*   Updated: 2023/06/04 16:52:34 by yichan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	Weapon		*m_weapon; // Weapon type
public:
	HumanB(std::string name);
	~HumanB();
	void	attack();
    void    setWeapon(Weapon &weapon); //setter function
};

#endif