/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:49:46 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/03 04:48:38 by bgannoun         ###   ########.fr       */
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
