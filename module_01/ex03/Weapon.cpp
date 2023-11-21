/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:10:29 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/18 12:42:19 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string iniType)
{
	type = iniType;	
}

const std::string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string newType)
{
	type = newType;
}
