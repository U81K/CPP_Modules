/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:42:45 by bgannoun          #+#    #+#             */
/*   Updated: 2023/09/18 20:10:22 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
	std::cout << std::endl;
}

void Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"; 
	std::cout << std::endl;
}

void Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
	std::cout << std::endl;
}

void Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	int i = 0;
	std::string levs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	funcs fun[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; 
	// Assign the member functions to the pointer
	while (i < 4 && levs[i].compare(level))
		i++;
	switch (i)
	{
	case (0):
		(this->*fun[0])();
	case (1):
		(this->*fun[1])();
	case (2):
		(this->*fun[2])();
	case (3):
		(this->*fun[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
