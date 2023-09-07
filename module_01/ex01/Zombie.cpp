/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 06:45:32 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/03 06:59:08 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name << " has died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ":" <<  " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;
	newZombie->name = name;
	return (newZombie);
}
