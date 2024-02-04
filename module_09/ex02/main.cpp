/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:11:00 by bgannoun          #+#    #+#             */
/*   Updated: 2024/02/03 17:31:41 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av){
	if (ac <= 1){
		std::cerr << "invalid args" << std::endl;
		exit(1);
	}
	PmergeMe sort(av);
	// sort.printLIST();
	return(0);
}