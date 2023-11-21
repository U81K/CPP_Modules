/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:26 by bgannoun          #+#    #+#             */
/*   Updated: 2023/11/21 12:46:44 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n\n";
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n"; 
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	int i = 0;
	std::string levs[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	funcs fun[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	while (i < 4 && levs[i].compare(level))
		i++;
	switch (i)
	{
		case 0:
			(this->*fun[0])();
		case 1:
			(this->*fun[1])();
		case 2:
			(this->*fun[2])();
		case 3:
			(this->*fun[3])();
			break;
		default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
