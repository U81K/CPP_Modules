/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:17:51 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/25 15:11:29 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	// try
	// {
	// 	Bureaucrat a("one", 1);
	// 	std::cout << a;
	// 	// a.increment();
	// 	// std::cout << a;
	// 	// a.increment();
		
	// 	Bureaucrat b("two", 150);
	// 	std::cout << b;
	// 	// b.decrement();
	// 	// std::cout << b;
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Form f("test", 20, 20);
	// 	Bureaucrat b("name", 20);
	// 	std::cout << f << std::endl << b;
	// 	f.beSigned(b);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	Form f("form1", 10, 10);
	Bureaucrat b1("b1", 10);
	try{
		f.beSigned(b1);		
		std::cout << f << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// b1.signForm(f);
	return (0);
}