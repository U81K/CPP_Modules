/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:43:01 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/22 16:43:32 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : limit(n) {}

Span::Span(const Span &other) : myVector(other.myVector), limit(other.limit) {}

Span &Span::operator=(const Span &other){
	if (this != &other){
		myVector = other.myVector;
		limit = other.limit;
	}
	return (*this);
}
Span::~Span() {}

size_t Span::getLimit(){
	return (limit);
}

size_t Span::getSize() const {
	return (myVector.size());
}

void Span::addNumber(int number){
	if (getSize() < limit)
		myVector.push_back(number);
	else
		throw (std::overflow_error("limit reached"));
}

int Span::shortestSpan(void){
	if (getSize() <= 1)
		throw (std::runtime_error("cant find span"));
	int sp;
	sp = std::abs(myVector[1] - myVector[0]);
	for(size_t i = 0; i < getSize(); i++){
		for(size_t j = 1 + i; j < getSize(); j++){
			if (std::abs(myVector[j] - myVector[i]) <= sp)
				sp = std::abs(myVector[j] - myVector[i]);
		}
	}
	return (sp);
}

int Span::longestSpan(){
	if (getSize() <= 1)
		throw(std::runtime_error("cant find span"));
	std::vector<int>::iterator max = std::max_element(myVector.begin(), myVector.end());
	std::vector<int>::iterator min = std::min_element(myVector.begin(), myVector.end());
	return (std::abs(*max - *min));
}

void Span::PrintAll(){
	for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++){
		std::cout << *it << std::endl;
	}
}