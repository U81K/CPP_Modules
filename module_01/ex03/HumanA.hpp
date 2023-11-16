/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:11:41 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/11 10:40:45 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
		private:
	std::string name;
	Weapon &weapon;
		public:
	HumanA(std::string Name, Weapon &wpn) : name(Name), weapon(wpn) {}
	void attack();
};

#endif