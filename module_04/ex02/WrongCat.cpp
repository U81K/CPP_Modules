/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 16:53:50 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/16 17:03:55 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
	std::cout << "WrongCat copy constructor" << std::endl;
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
	std::cout << "WrongCat copy assignment op" << std::endl;
	type = other.type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!\n";
}