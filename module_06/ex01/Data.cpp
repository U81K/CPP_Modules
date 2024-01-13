/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:28:46 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/12 11:39:09 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : type("NA") {}

Data::~Data() {}

Data::Data(const Data &other){
	*this = other;
}

Data &Data::operator=(const Data &other){
	type = other.type;
	return (*this);
}

void Data::setType(std::string t){
	type = t;
}

void Data::getType(){
	std::cout << type << std::endl;
}