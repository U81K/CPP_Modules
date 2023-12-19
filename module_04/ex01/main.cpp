/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:21:43 by bgannoun          #+#    #+#             */
/*   Updated: 2023/12/19 17:38:55 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;
	// delete i;

	// Animal *animals[4];
	
	// for (int i = 0; i < 2; ++i){
	// 	animals[i] = new Dog();
	// }
	
	// for (int i = 2; i < 4; ++i){
	// 	animals[i] = new Cat();
	// }
	// std::cout << "-----------------\n";
	// for (int i = 0; i < 4; ++i){
	// 	delete animals[i];
	// }
	
	// Animal *d = new Dog;
	// // // Dog* dogPtr = dynamic_cast<Dog*>(d);
	// // dogPtr->print();
	// d->print();
	// delete d;

	Dog d;
	d.fill();

	Dog d1(d);
	d1.print();
	
	return (0);
}
