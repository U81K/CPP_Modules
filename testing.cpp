/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:39:04 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/06 15:26:03 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
	std::string in = "-inff";
	char *ptr;
	double earth = std::strtof(in.c_str(), &ptr);
	std::cout << in << std::endl;
	std::cout << "int: " << static_cast<int>(earth) << std::endl;
	std::cout << "char: " << static_cast<float>(earth)  << std::endl;
	std::cout << "double: " << static_cast<double>(earth) << std::endl;
	std::cout << ptr << std::endl;
	return 0;
}
