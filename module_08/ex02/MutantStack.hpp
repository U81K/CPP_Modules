/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:43:41 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/25 18:19:36 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
#define MutantStack_HPP

#include <stack>
#include <deque>
#include <iostream>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T>{ 
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack &operator=(const MutantStack &other);
		typedef typename std::stack<T>::container_type::iterator iterator ;
		iterator begin();
		iterator end();
};

#endif