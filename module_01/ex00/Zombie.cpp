/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:49:46 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/16 12:02:07 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
