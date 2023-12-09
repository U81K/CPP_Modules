/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:01:14 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/08 17:15:01 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hit_p(10), energy_p(10), attack_d(0)
{
	std::cout << "default contructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string init_name) : name(init_name), hit_p(10), energy_p(10), attack_d(0)
{
	std::cout << "ClapTrap " << init_name << " created"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "copy constuctor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "copy assignment operator" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_p = other.hit_p;
		energy_p = other.energy_p;
		attack_d = other.attack_d;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destuctor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_p > 0 && energy_p > 0)
	{
		energy_p--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "<< attack_d << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " cant attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_p > 0 && energy_p > 0)
	{
		hit_p -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " cant take damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_p > 0 && energy_p > 0)
	{
		energy_p--;
		hit_p += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << std::endl; 
	}
	else
		std::cout << "ClapTrap " << name << " cant be repaired." << std::endl;
}
