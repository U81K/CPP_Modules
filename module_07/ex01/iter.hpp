/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgannoun <bgannoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 14:24:40 by bgannoun          #+#    #+#             */
/*   Updated: 2024/01/16 20:35:08 by bgannoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef iter_HPP
#define iter_HPP

template<typename T>
void func(T &p){
	p++;
}

template<typename T>
void printE(const T &p){
	std::cout << p << " ";
}

template<typename T, typename B>
void iter(T *arr, int len, void (func)(B&)){
	for (int i = 0; i < len; i++){
		func(arr[i]);
	}
}

#endif