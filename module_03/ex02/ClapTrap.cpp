/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:14:29 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/11 18:15:57 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(""), hit_p(10), energy_p(10), attack_d(0)
{
	std::cout << "ClapTrap default contructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string init_name) : name(init_name), hit_p(10), energy_p(10), attack_d(0)
{
	std::cout << "ClapTrap " << init_name << " created"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap copy constructor is called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator is called" << std::endl;
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
		std::cout << name << " takes " << amount << " points of damage" << std::endl;
	}
	else
		std::cout << name << " cant take damage" << std::endl;
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
