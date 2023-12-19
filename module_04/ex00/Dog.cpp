/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:56:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 15:45:22 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("dog"){
	std::cout << "dog constructor" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << "dog copy constructor" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "dog copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

Dog::~Dog(){
	std::cout << "dog destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!\n";
}