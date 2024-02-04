/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:11:20 by bgannoun          #+#    #+#             */
/*   Updated: 2024/02/04 16:25:43 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <vector>

class PmergeMe{
	private:
		PmergeMe() {}
		std::vector<int> LIST;
	public:
		bool isDigit(std::string str){
			for(int i = 0; str[i]; i++){
				if (!std::isdigit(str[i]))
					return (false);
			}
			return true;
		}
		void swap(int &a, int &b){
			int tmp = a;
			a = b;
			b = tmp;
		}
		
		void sortpair(std::vector<int> &L){
			if (L.size() < 2)
				return;
			for(unsigned long i = 0; i < L.size() - 1; i += 2){
				if (L[i] > L[i + 1])
					swap(L[i], L[i + 1]);
				// std::cout << L[i] << std::endl;
			}
		}
		// void recursiveSortPairs(std::vector<int>& elements, size_t start, size_t end) {
		// 	// Base case: If the range has less than two elements, return
		// 	if (end - start < 1) {
		// 		return;
		// 	}

		// 	// Recursively sort pairs in the higher half
		// 	recursiveSortPairs(elements, start, start + (end - start) / 2);

		// 	// Recursively sort pairs in the lower half
		// 	recursiveSortPairs(elements, start + (end - start) / 2 + 1, end);

		// 	// Perform pairwise sort for the entire range
		// 	sortpair(elements);
		// }
		PmergeMe(char **av){
			for(int i = 1; av[i]; i++){
				if (!isDigit(av[i])){
					std::cerr << "invalid args" << std::endl;
					exit(1);
				}
				LIST.push_back(strtod(av[i], NULL));
			}
			printLIST();
			sortpair(LIST);
			// recursiveSortPairs(LIST, 0, LIST.size() - 1);
			printLIST();
		}
		void printLIST(){
			std::cout << "------------------\n";
			for(std::vector<int>::iterator it = LIST.begin(); it != LIST.end(); it++){
				std::cout << *it << std::endl;
			}
			std::cout << "------------------\n";
		}
		~PmergeMe() {}
};

#endif