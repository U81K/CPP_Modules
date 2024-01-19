/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:23:07 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/16 20:37:35 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void){
	int arr[] = {1, 2, 3, 4};
	iter(arr, 4, printE<int>);
	// std::cout << std::endl;
	// iter(arr, 4, func);
	// iter(arr, 4, printE);
	// ///
	// std::cout << std::endl;
	// char arrChar[] = {'1', '2'};
	// iter(arrChar, 2, printE);
	// std::cout << std::endl;
	// iter(arrChar, 2, func);
	// iter(arrChar, 2, printE);
	return (0);
}
