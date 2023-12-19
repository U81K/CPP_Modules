/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:00:52 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/11 18:30:51 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{ 
	ScavTrap scav("mehdi");
	
	scav.attack("enemey");
	scav.takeDamage(10);
	scav.beRepaired(50);
	scav.attack("enemey");
	return (0);
}
