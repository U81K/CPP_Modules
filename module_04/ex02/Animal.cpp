/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:51:21 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 16:52:20 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	type = "default";
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(std::string t){
	type = t;
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other){
	std::cout << "Animal copy constructor" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other){
	std::cout << "Animal copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal destructor" << std::endl;
}

std::string Animal::getType() const{
	return (type);
}

void Animal::makeSound() const{
}
