/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:55:43 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 18:26:10 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_hpp
#define Dog_hpp

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

class Dog : public AAnimal
{
	private:
		Brain *dogsbrain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		void makeSound() const;
		void fill();
		void print();
};

#endif