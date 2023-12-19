/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:14:50 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/11 18:16:19 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl; 
}

ScavTrap::ScavTrap(std::string init_name) : ClapTrap(init_name) 
{
	hit_p = 100;
	energy_p = 50;
	attack_d = 20;
	std::cout << "ScavTrap " << init_name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor is called" << std:: endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap copy Assignment operator is called" << std::endl;
	if (this != &other)
	{
		hit_p = other.hit_p;
		energy_p = other.energy_p;
		attack_d = other.attack_d;
	}
	return (*this);
}
		
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destuctor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_p > 0 && energy_p > 0)
	{
		energy_p--;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "<< attack_d << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " cant attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in gate keeper mode" << std::endl;
}
