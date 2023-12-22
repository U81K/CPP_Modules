/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:15:36 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 17:33:00 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor" << std:: endl;
}

Brain::Brain(const Brain &other){
	*this = other;
}

Brain &Brain::operator=(const Brain &other){
	if (this != &other)
	{
		for (int i = 0; i < 100; i++){
			ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}

void Brain::fill_ideas(){
	for(int i = 0; i < 100; i++){
		ideas[i] = std::to_string(i + 1);
	}
}

void Brain::printing(){
	for(int i = 0; i < 100; i++){
		std::cout << ideas[i] << std::endl;
	}
}
