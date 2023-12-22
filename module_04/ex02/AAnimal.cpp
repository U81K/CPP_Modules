/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:20:18 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 18:30:10 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	type = "default";
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(std::string t){
	type = t;
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other){
	std::cout << "AAnimal copy constructor" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other){
	std::cout << "AAnimal copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor" << std::endl;
}

std::string AAnimal::getType() const{
	return (type);
}
