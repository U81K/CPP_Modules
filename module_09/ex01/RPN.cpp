/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:26:48 by bgannoun          #+#    #+#             */
/*   Updated: 2024/02/01 12:07:32 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

rpn::rpn() {}

rpn::rpn(const rpn &other){
	*this = other;
}

rpn &rpn::operator=(const rpn &other){
	if (this != &other){
		stack = other.stack;
	}
	return (*this);
}
		
rpn::rpn(std::string input){
	ParseInput(input);
}

bool rpn::isNum(std::string str){
	std::istringstream iss(str);
	double value;
	iss >> std::noskipws >> value;
	return iss.eof() && !iss.fail();
}

bool rpn::isOp(std::string token)
{
	if (token.size() != 1)
		return (false);
	if (!token.compare("-") || !token.compare("+")
		|| !token.compare("/") || !token.compare("*"))
		return (true);
	return false;
}

void rpn::ParseInput(std::string input){
	std::istringstream iss(input);
	std::string token;
	while (std::getline(iss, token, ' ')){
		char *p;
		if (isNum(token)){
			stack.push(std::strtod(token.c_str(), &p));
		}
		else if (isOp(token) && stack.size() >= 2){
			double right = stack.top();
			stack.pop();
			double left = stack.top();
			stack.pop();
			if (!token.compare("+"))
				stack.push(left + right);
			else if (!token.compare("-"))
				stack.push(left - right);
			else if (!token.compare("*"))
				stack.push(left * right);
			else if (!token.compare("/")){
				if (right == 0){
					std::cerr << "undefined" << std::endl;
					exit(1);
				}	
				stack.push(left / right);
			}
		}
		else{
			std::cerr << "Error" << std::endl;
			exit(1);
		}
	}
	std::cout << stack.top() << std::endl;
}

rpn::~rpn() {}