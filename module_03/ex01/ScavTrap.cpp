/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:05:13 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/08 17:19:08 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	
}

ScavTrap::ScavTrap(std::string init_name) : ClapTrap(init_name) 
{
	hit_p = 100;
	energy_p = 50;
	attack_d = 20;
		std::cout << "ScavTrap " << init_name << " created" << std::endl;

}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destuctor called" << std::endl;
}

// void ScavTrap::attack(const std::string& target)
// {
// 	if (hit_p > 0 && energy_p > 0)
// 	{
// 		energy_p--;
// 		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "<< attack_d << " points of damage!" << std::endl;
// 	}
// 	else
// 		std::cout << "ScavTrap " << name << " cant attack" << std::endl;
// }
