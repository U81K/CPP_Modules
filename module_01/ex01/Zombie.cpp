/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:32 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/18 08:06:15 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}
	
Zombie::Zombie(std::string z_name)
{
	name = z_name;
}

Zombie::~Zombie()
{
	std::cout << name << " has died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ":" <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string z_name)
{
	name = z_name;
}
