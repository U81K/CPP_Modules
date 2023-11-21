/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 03:49:29 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/16 12:27:28 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
	
Zombie* newZombie(std::string name)
{
	Zombie *newZombie = new Zombie(name);
	return (newZombie);
}

void randomChump(std::string name)
{
	Zombie newZombie(name);
	newZombie.announce();
}

int main(void)
{
	Zombie *z_heap = newZombie("z_heap");
	z_heap->announce();
	delete z_heap;

	randomChump("z_stack");
	return (0);
}
