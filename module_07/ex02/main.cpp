/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:30:40 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/16 20:48:30 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void){
	try{
		Array<int> a(3);
		a[0] = 0;
		a[1] = 1;
		a[2] = 2;
		std::cout << a[1];
		a[1] = 9;
		std::cout << std::endl << a[1];
	
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}