/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:58:12 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 18:27:20 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_hpp
#define Cat_hpp

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
#include "AAnimal.hpp"

class Cat : public AAnimal
{
	private:
		Brain *catsbrain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		void makeSound() const;
		void fill();
		void print();
};

#endif