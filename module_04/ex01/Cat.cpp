/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:58:52 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 18:30:20 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
	catsbrain = new Brain();
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other){
	std::cout << "Cat copy constructor" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other){
	std::cout << "Cat copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

Cat::~Cat(){
	delete catsbrain;
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow!\n";
}