/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:12:09 by bgannoun          #+#    #+#             */
/*   Updated: 2023/10/11 15:56:38 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	std::string input;
	Harl harl;
	
	while (input.compare("EXIT"))
	{
		std::cout << "enter a level : ";
		getline(std::cin, input);
		std::cin.clear();
		harl.complain(input);
	}
	return (0);
}
