/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:28:38 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/12 11:39:26 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Data_HPP
#define Data_HPP

#include <iostream>

class Data{
	private:
		std::string type;
	public:
		Data();
		~Data();
		Data(const Data &other);
		Data &operator=(const Data &other);
		void setType(std::string t);
		void getType();
};

#endif