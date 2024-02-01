/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:26:55 by bgannoun          #+#    #+#             */
/*   Updated: 2024/02/01 12:05:39 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include "iostream"
#include <stack>
#include <sstream>
#include <cstdlib>

class rpn{
	private:
		rpn();
		std::stack<double> stack;
	public:
		rpn(std::string input);
		rpn(const rpn &other);
		rpn &operator=(const rpn &other);
		bool isNum(std::string str);
		bool isOp(std::string token);
		void ParseInput(std::string input);
		~rpn();
};

#endif