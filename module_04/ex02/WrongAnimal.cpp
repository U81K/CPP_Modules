/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:56:38 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 17:02:15 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	type = "default";
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string t){
	type = t;
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << "WrongAnimal copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor" << std::endl;
}

std::string WrongAnimal::getType() const{
	return (type);
}

void WrongAnimal::makeSound() const{
}
