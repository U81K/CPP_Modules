/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:17:39 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/11 18:56:07 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	hit_p = 100;
	energy_p = 100;
	attack_d = 30;
	std::cout << "FragTrap default is created" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n){
	hit_p = 100;
	energy_p = 100;
	attack_d = 30;
	std::cout << "FragTrap " << name << " constructor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other){
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		hit_p = other.hit_p;
		energy_p = other.energy_p;
		attack_d = other.attack_d;
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destuctor called" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}