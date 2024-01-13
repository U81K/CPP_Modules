/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:26:07 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/12 18:50:17 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int randomN(){
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int n = std::rand() % 3;
	return (n);
}

Base * generate(void){
	switch (randomN()){
		case 0:
			return (new a());
		case 1:
			return (new b());
		case 2:
			return (new c());
		default:
			return (nullptr);
	}
}

void identify(Base* p){
	if (dynamic_cast<a*>(p) != nullptr)
		std::cout << "the obj pointed by p is type A" << std::endl;	
	else if (dynamic_cast<b*>(p) != nullptr)
		std::cout << "the obj pointed by p is type B" << std::endl;	
	else if (dynamic_cast<c*>(p) != nullptr)
		std::cout << "the obj pointed by p is type C" << std::endl;
	else
		std::cout << "the obj pointed by p has unknown type" << std::endl;
}

void identify(Base& obj) {
    try {
        a& aObj = dynamic_cast<a&>(obj);
        std::cout << "Object is of type A" << std::endl;
		(void) aObj;
    } catch (const std::bad_cast&) {}
	
    try {
        b& bObj = dynamic_cast<b&>(obj);
        std::cout << "Object is of type B" << std::endl;
		(void) bObj;
    } catch (const std::bad_cast&) {}
	
    try {
        c& cObj = dynamic_cast<c&>(obj);
        std::cout << "Object is of type C" << std::endl;
		(void) cObj;
    } catch (const std::bad_cast&) {}
}

int main(void){
	
	Base *p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}