/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:11:12 by bgannoun          #+#    #+#             */
/*   Updated: 2024/04/21 10:44:56 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int _compare_count = 0;

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other){
	*this = other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
	if (this != &other){
		list = other.list;
		deq_list = other.deq_list;
	}
	return (*this);
}

bool PmergeMe::isDigit(std::string str){
	for(int i = 0; str[i]; i++){
		if (!std::isdigit(str[i]))
			return (false);
	}
	return true;
}

void PmergeMe::printLIST(std::vector<std::vector<int> > list){
	for(std::vector<std::vector<int> >::iterator it = list.begin(); it != list.end(); it++){
		for(std::vector<int>::iterator itt = it->begin(); itt != it->end(); itt++){
			std::cout << *itt << " " ;
		}
	}
	std::cout << std::endl;
}

void PmergeMe::printDeq(std::deque<std::deque<int> > deq_list){
	std::cout << "<------------------>\n";
	for(std::deque<std::deque<int> >::iterator it = deq_list.begin(); it != deq_list.end(); it++){
		for(std::deque<int>::iterator itt = it->begin(); itt != it->end(); itt++){
			std::cout << *itt << " " ;
		}
		std::cout << std::endl;
	}
	std::cout << "<------------------>\n";
}

PmergeMe::PmergeMe(char **av){
	for(int i = 1; av[i]; i++){
		if (!isDigit(av[i])){
			std::cerr << "invalid args" << std::endl;
			exit(1);
		}
		std::vector<int> tmp;
		std::deque<int> tmp_d;
		tmp_d.push_back(strtod(av[i], NULL));
		tmp.push_back(strtod(av[i], NULL));
		list.push_back(tmp);
		deq_list.push_back(tmp_d);
	}
	std::cout << "Before: ";
	printLIST(list);
	clock_t start_time = clock();
	misort();
	clock_t end_time = clock();
	std::cout << "After: ";
	printLIST(list);
	std::cout << "Time to process a range of " << list.size() << " elements with std::vector : " << static_cast<float>(end_time - start_time) * 1000 / CLOCKS_PER_SEC << " us" << std::endl;
	clock_t start_time_deq = clock();
	misort_deque();
	clock_t end_time_deq = clock();
	std::cout << "Time to process a range of " << deq_list.size() << " elements with std::deque : " << static_cast<float>(end_time_deq - start_time_deq) * 1000 / CLOCKS_PER_SEC << " us" << std::endl;
}

//////////funs for sorting vector//////////
std::vector<int> PmergeMe::mergeTwoVectors(std::vector<int> v1, std::vector<int> v2){
	std::vector<int> res;
	if (v1.back() < v2.back()){
		for (size_t i = 0; i < v1.size(); i++){
			res.push_back(v1[i]);
		}
		for (size_t j = 0; j < v2.size(); j++){
			res.push_back(v2[j]);
		}
	}
	else {
		for (size_t j = 0; j < v2.size(); j++){
			res.push_back(v2[j]);
		}
		for (size_t i = 0; i < v1.size(); i++){
			res.push_back(v1[i]);
		}
	}
	_compare_count++;
	return (res);
}

void PmergeMe::mergeAllPairs(){
	std::vector<std::vector<int> > tmp;
	for(size_t i = 0; i < list.size(); i += 2){
		std::vector<int> pair = mergeTwoVectors(list[i], list[i + 1]);
		tmp.push_back(pair);
	}
	list = tmp;
}

void PmergeMe::spliting(){
	std::vector<std::vector<int> > tmp;
	size_t i = 0;
	for(; i < list.size(); i++){
		std::vector<int> v = list[i];
		size_t mid = v.size() / 2;
		std::vector<int> left(v.begin(), v.begin() + mid);
		std::vector<int> right(v.begin() + mid, v.end());
		tmp.push_back(left);
		tmp.push_back(right);
	}
	list.clear();
	list = tmp;
}

bool compar(std::vector<int> v1, std::vector<int> v2){
	_compare_count++;
	if (v1.back() <= v2.back()){
		return (true);
	}
	return (false);
}

void PmergeMe::misort(){
	std::vector<int> rest;
	if (list.size() % 2 != 0){
		rest = list.back();
		list.pop_back();
	}
	mergeAllPairs();
	if (list.size() > 1)
		misort();
	spliting();
	std::vector<std::vector<int> > main;
	std::vector<std::vector<int> > pend;
	for(size_t i = 0; i < list.size(); i++){
		if (i % 2 != 0 || i < 1)
			main.push_back(list[i]);
		else
			pend.push_back(list[i]);
	}
	if (rest.size())
		pend.push_back(rest);
	for(size_t i = 0; i < pend.size(); i++){
		main.insert(std::lower_bound(main.begin(), main.end(), pend[i], compar), pend[i]);
	}
	list = main;
}

//////////funs for sorting deque//////////
std::deque<int> PmergeMe::D_mergeTwoVectors(std::deque<int> v1, std::deque<int> v2){
	std::deque<int> res;
	if (v1.back() < v2.back()){
		for (size_t i = 0; i < v1.size(); i++){
			res.push_back(v1[i]);
		}
		for (size_t j = 0; j < v2.size(); j++){
			res.push_back(v2[j]);
		}
	}
	else {
		for (size_t j = 0; j < v2.size(); j++){
			res.push_back(v2[j]);
		}
		for (size_t i = 0; i < v1.size(); i++){
			res.push_back(v1[i]);
		}
	}
	return (res);
}

void PmergeMe::D_mergeAllPairs(){
	std::deque<std::deque<int> > tmp;
	for(size_t i = 0; i < deq_list.size(); i += 2){
		std::deque<int> pair = D_mergeTwoVectors(deq_list[i], deq_list[i + 1]);
		tmp.push_back(pair);
	}
	deq_list = tmp;
}

void PmergeMe::D_spliting(){
	std::deque<std::deque<int> > tmp;
	size_t i = 0;
	for(; i < deq_list.size(); i++){
		std::deque<int> v = deq_list[i];
		size_t mid = v.size() / 2;
		std::deque<int> left(v.begin(), v.begin() + mid);
		std::deque<int> right(v.begin() + mid, v.end());
		tmp.push_back(left);
		tmp.push_back(right);
	}
	deq_list.clear();
	deq_list = tmp;
}

bool D_compar(const std::deque<int> v1,const std::deque<int> v2){
	if (!v1.empty() && !v2.empty()){
		if (v1.back() <= v2.back())
			return (true);
	}
	return (false);
}

void PmergeMe::misort_deque(){
	std::deque<int> rest;
	if (deq_list.size() % 2 != 0){
		rest = deq_list.back();
		deq_list.pop_back();
	}
	D_mergeAllPairs();
	if (deq_list.size() > 1)
		misort_deque();

	D_spliting();
	std::deque<std::deque<int> > main;
	std::deque<std::deque<int> > pend;
	for(size_t i = 0; i < deq_list.size(); i++){
		if (i % 2 != 0 || i < 1)
			main.push_back(deq_list[i]);
		else
			pend.push_back(deq_list[i]);
	}
	if (rest.size())
		pend.push_back(rest);
	for(std::deque<std::deque<int> >::iterator it = pend.begin(); it != pend.end(); it++){
			std::deque<std::deque<int> >::iterator InsPos = (std::lower_bound(main.begin(), main.end(), *it, D_compar));
			main.insert(InsPos, *it);
	}
	deq_list = main;
}

int get_compare_count(void){
	return (_compare_count);
}