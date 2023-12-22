/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:56:04 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 18:26:32 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("dog"){
	dogsbrain = new Brain();
	std::cout << "dog constructor" << std::endl;
}

Dog::Dog(const Dog &other){
	std::cout << "dog copy constructor" << std::endl;
	type = other.type;
	dogsbrain = new Brain(*other.dogsbrain);
}

Dog &Dog::operator=(const Dog &other){
	std::cout << "dog copy assignment op" << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete dogsbrain;
		dogsbrain = new Brain(*other.dogsbrain);
	}
	return (*this);
}

Dog::~Dog(){
	delete dogsbrain;
	std::cout << "dog destructor" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof!\n";
}

void Dog::fill(){
	dogsbrain->fill_ideas();
}

void Dog::print(){
	dogsbrain->printing();
}
