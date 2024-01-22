/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:42:53 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/22 16:43:26 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
#define Span_HPP

#include <vector>
#include "iostream"

class Span
{
		private:
	std::vector<int> myVector;
	unsigned int limit;
	Span() {}
		public:
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();
	size_t getLimit();
	size_t getSize() const;
	void addNumber(int number);
	int shortestSpan(void);
	int longestSpan();
	template<typename T>
	void addRange(T first, T last){
		size_t availible = limit - getSize();
		if (std::distance(first, last) > (long)availible)
			throw (std::runtime_error("the range to big"));
		myVector.insert(myVector.end(), first, last);
	}
	void PrintAll();
};

#endif