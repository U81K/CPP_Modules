/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:17:51 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/22 15:41:33 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("one", 1);
		std::cout << a;
		// a.increment();
		// std::cout << a;
		// a.increment();
		
		Bureaucrat b("two", 150);
		std::cout << b;
		// b.decrement();
		// std::cout << b;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}