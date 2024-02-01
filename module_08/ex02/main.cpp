/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:43:24 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/25 18:21:59 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"
#include "MutantStack.cpp"
#include <list>

int main()
{
	std::cout << "------mutantstack-----\n";
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	// //[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "-------list-------\n";
	std::list<int> myList;
	myList.push_back(5);
	myList.push_back(17);
	std::cout << myList.back() << std::endl;
	myList.pop_back();
	std::cout << myList.size() << std::endl;
	myList.push_back(3);
	myList.push_back(5);
	myList.push_back(737);
	// // //[...]
	myList.push_back(0);
	std::list<int>::iterator its = myList.begin();
	std::list<int>::iterator ites = myList.end();
	++its;
	--its;
	while (its != ites)
	{
	std::cout << *its << std::endl;
	++its;
	}
	std::list<int> z(myList);
return 0;
}
