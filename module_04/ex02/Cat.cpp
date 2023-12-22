/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:58:52 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 18:27:03 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"){
	catsbrain = new Brain();
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	type = other.type;
	catsbrain = new Brain(*other.catsbrain);
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment op" << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete catsbrain;
		catsbrain = new Brain(*other.catsbrain);
	}
	return (*this);
}

Cat::~Cat(){
	delete catsbrain;
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!\n";
}

void Cat::fill(){
	catsbrain->fill_ideas();
}

void Cat::print(){
	catsbrain->printing();
}
