/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:11:52 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/07 08:28:09 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
		private:
	std::string name;
	Weapon *weapon;
		public:
	HumanB(std::string Name) : name(Name) {}
	void setWeapon(Weapon &wpn)
	{
		weapon = &wpn;
	}
	void attack();
};

#endif