/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:42:37 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/22 16:43:57 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

// int main(void){
// 	try{
// 		Span sp = Span(10001);
// 		for(size_t i = 0; i < 10000; i++){
// 			sp.addNumber(i);
// 		}
// 		sp.PrintAll();
// 		std::cout << "sp = " << sp.shortestSpan() << std::endl;
// 		std::cout << "lp = " << sp.longestSpan() << std::endl;
// 	}
// 	catch(std::exception &e){
// 		std::cout << e.what() << std::endl;
// 	}
// 	// try{
// 	// 	Span sp = Span(6);
// 	// 	sp.addNumber(1);
// 	// 	sp.addNumber(2);
// 	// 	sp.addNumber(3);
// 	// 	std::vector<int> to_add;
// 	// 	to_add.push_back(4);
// 	// 	to_add.push_back(5);
// 	// 	to_add.push_back(6);
// 	// 	sp.addRange(to_add.begin(), to_add.end());
// 	// 	sp.PrintAll();
// 	// }
// 	// catch(std::exception &e){
// 	// 	std::cout << e.what() << std::endl;
// 	// }
// 	return (0);
// }
// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }