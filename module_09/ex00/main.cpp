/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:45:27 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/30 08:18:52 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DataBase.hpp"
#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	
	if (ac != 2){
		std::cerr << "invalid argumants\n";
		return (1);
	}
	BitcoinExchange be(av[1]);
	return (0);
}