/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:11:20 by bgannoun          #+#    #+#             */
/*   Updated: 2024/04/21 10:40:44 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP


#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
#include <iomanip>
#include <deque>

class PmergeMe{
	private:
		std::vector<std::vector<int> > list;
		std::deque<std::deque<int> > deq_list;
		// int compare_count;
		PmergeMe();
	public:
		PmergeMe(char **av);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
		bool isDigit(std::string str);
		
		//////////funs for sorting vector//////////
		void misort();
		void mergeAllPairs();
		std::vector<int> mergeTwoVectors(std::vector<int> v1, std::vector<int> v2);
		void spliting();
		void printLIST(std::vector<std::vector<int> > list);
		//////////funs for sorting deque//////////
		void misort_deque();
		void D_spliting();
		void D_mergeAllPairs();
		std::deque<int> D_mergeTwoVectors(std::deque<int> v1, std::deque<int> v2);
		void printDeq(std::deque<std::deque<int> > deq_list);
};

int get_compare_count();

#endif