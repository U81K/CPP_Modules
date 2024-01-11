/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverte.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:20:41 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/11 18:31:16 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverte.hpp"
#include <iomanip>
#include <cmath>

int	ft_strlen(char *str){
	int i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

bool is_inf(double v)
{
	if (v == 1.0 / 0.0 || v == -1.0 / 0.0)
		return (true);
	return (false);
}

int countDecimal(std::string str) {
    size_t dotPos = str.find('.');
    if (dotPos == std::string::npos){
        return 1;
	}
    return str.size() - dotPos - 1;
}

void printChar(double doubleV, char* p, std::string literal)
{
	if (std::isnan(doubleV) || is_inf(doubleV))
		std::cout << "char: impossible" << std::endl;
	else if(ft_strlen(p) == 1 && p[0] && literal.size() == 1)
		std::cout << "char: " << p[0] << std::endl;
	else {
		char charV = static_cast<int>(doubleV);
		if (doubleV > 127 || doubleV < 0)
			std::cout << "char: impossible" << std::endl;
		else if (charV < 0 || charV > 127 || ft_strlen(p) > 1)
			std::cout << "char: impossible" << std::endl;
		else if (isprint(charV))
			std::cout << "char: \'" << charV << "\'" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
}

void printInt(double doubleV, char* p, std::string literal)
{
	if (std::isnan(doubleV) || is_inf(doubleV))
		std::cout << "int: impossible" << std::endl;
	else if (!ft_strlen(p)) {
		if (doubleV < INT_MIN || doubleV > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << static_cast<int>(doubleV) << std::endl;
	}
	else {
		if (literal == "f")
			std::cout << "int: 102" << std::endl;
		else if (doubleV < INT_MIN || doubleV > INT_MAX)
			std::cout << "int: impossible" << std::endl;
		else if (ft_strlen(p) == 1 && p[0] == 'f')
			std::cout << "int: " << static_cast<int>(doubleV) << std::endl;
		else if (ft_strlen(p) == 1 && !static_cast<int>(doubleV))
			std::cout << "int: " << static_cast<int>(p[0]) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
}

void printFloat(double doubleV, char* p, std::string literal)
{
	if (std::isnan(doubleV))
		std::cout << "float: nanf" << std::endl;
	else if (is_inf(doubleV)) {
		if (doubleV == 1.0 / 0.0)
			std::cout << "float: +inff" << std::endl;
		else if (doubleV == -1.0 / 0.0)
			std::cout << "float: -inff" << std::endl;
	}
	else if (!ft_strlen(p)) {
		std::cout << "float: " << std::fixed << std::setprecision(countDecimal(literal)) << static_cast<float>(doubleV) << "f" << std::endl;
	}
	else {
		if (literal == "f")
			std::cout << "float: 102.0f" << std::endl;
		else if (ft_strlen(p) == 1 && p[0] == 'f')
			std::cout << "float: " << std::fixed << std::setprecision(countDecimal(literal) - 1) << static_cast<float>(doubleV) << "f" << std::endl;
		else if (ft_strlen(p) == 1 && !static_cast<int>(doubleV))
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(p[0]) << "f" << std::endl;
		else
			std::cout << "float: impossible" << std::endl;
	}
}

void printDouble(double doubleV, char* p, std::string literal)
{
	if (std::isnan(doubleV))
		std::cout << "double: nan" << std::endl;
	else if (is_inf(doubleV)) {
		if (doubleV == 1.0 / 0.0)
			std::cout << "double: +inf" << std::endl;
		else if (doubleV == -1.0 / 0.0)
			std::cout << "double: -inf" << std::endl;
	}
	else if (!ft_strlen(p)) {
		std::cout << "double: " << std::fixed << std::setprecision(countDecimal(literal)) << doubleV << std::endl;
	}
	else {
		if (literal == "f")
			std::cout << "double: 102.0" << std::endl;
		else if (ft_strlen(p) == 1 && p[0] == 'f')
			std::cout << "double: " << std::fixed << std::setprecision(countDecimal(literal) - 1) << doubleV << std::endl;
		else if (ft_strlen(p) == 1 && !static_cast<double>(doubleV))
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(p[0]) << std::endl;
		else
			std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverte::convert(std::string literal)
{	
	char *p;
	double doubleV = strtod(literal.c_str(), &p);
	
	printChar(doubleV, p, literal);
	printInt(doubleV, p, literal);
	printFloat(doubleV, p, literal);
	printDouble(doubleV, p, literal);
}